/**
 *    author:  raj_001
 *    created: 2024-08-21 16:12:10
 * https://codeforces.com/problemset/problem/339/D
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

const int N = (1 << 17) + 5;
int a[N], t[4 * N];
int marge(int l, int r, int len)
{
    int MSB = __lg(len);
    if (MSB % 2 != 0)
    {
        return (l | r);
    }
    else
    {
        return (l ^ r);
    }
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    t[n] = marge(t[l], t[r], (e - b + 1));
}
//
void update(int n, int b, int e, int p, int v)
{
    if (e < p || b > p)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, p, v);
    update(r, m + 1, e, p, v);
    t[n] = marge(t[l], t[r], e - b + 1);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    // for(int &v:a)cin>>v ;
    n = (1 << n);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    // cout << n << " " << m << nl;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        update(1, 1, n, a, b);
        cout << t[1] << nl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}