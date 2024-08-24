/**
 *    author:  raj_001
 *    created: 2024-08-24 15:12:25
 * https://codeforces.com/contest/1843/problem/E
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define nl '\n'
#define INF 1e18
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define pb push_back
#define ppb pop_back
#define rf(i, a, b) for (int i = a; i < (b); i++)
#define fr(i, a) for (int i = 0; i < (a); i++)
#define frr(i, a) for (int i = (a) - 1; i >= 0; i--)
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// Templete from Geothermal

void __print(int x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ", ";
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '[';
    for (auto &i : x)
        cerr << (f++ ? ", " : ""), __print(i);
    cerr << "]";
}
void _print() { cerr << "\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifdef DEBUG
#define dbg(x...)                                                               \
    cerr << /*"\e[91m" << __func__ << ":" << __LINE__ << */ " " << #x << " = "; \
    _print(x);                                                                  \
    // cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

const int N = 1e5 + 5;
int t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    t[n] = t[l] + t[r];
}
void update(int n, int b, int e, int p, int v)
{

    if (b > p || e < p)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, p, v);
    update(r, m + 1, e, p, v);
    t[n] = t[l] + t[r];
}
//
int sum(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return 0;
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return sum(l, b, m, i, j) + sum(r, m + 1, e, i, j);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vpi v(n);
    fr(i, m)
    {
        // int a, b;
        // cin >> a >> b;
        cin >> v[i].first >> v[i].second;
        // v.pb({a, b});
    }
    // build(1, 1, n);
    int q;
    cin >> q;
    vi queries(q);
    fr(i, q) cin >> queries[i];

    auto ok = [&](int mid)
    {
        build(1, 1, n);

        for (int i = 0; i <= mid; i++)
        {
            update(1, 1, n, queries[i], 1);
        }

        bool found = false;
        for (int i = 0; i < m; i++)
        {
            int L = v[i].first, R = v[i].second, seg_len, one, zero;
            seg_len = (R - L) + 1;
            one = sum(1, 1, n, L, R);
            zero = (seg_len - one);
            if (one > zero)
            {
                found = true;
                break;
            }
        }
        return found;
    };
    //
    int l = 0, r = q - 1, mid, ans = -1;
    while (r >= l)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    // cout << l << " " << r << nl;
    if (ans == -1)
    {
        cout << ans << nl;
    }
    else
    {
        ans++;
        cout << ans << nl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}