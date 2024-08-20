/**
 *    author:  raj_001
 *    created: 2024-08-19 10:21:16
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

const int N = 1e5 + 5;
int a[N], t[4 * N];

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
    // t[n] = t[l] + t[r];
    t[n] = min(t[l], t[r]);
}
//
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
    // t[n] = t[l] + t[r];
    t[n] = min(t[l], t[r]);
}

//
int getMin(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return INT_MAX;
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return min(getMin(l, b, m, i, j),
               getMin(r, m + 1, e, i, j));
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            i++;
            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            cout << getMin(1, 1, n, l, r) << nl;
        }
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