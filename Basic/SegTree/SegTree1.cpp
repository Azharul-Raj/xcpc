/**
 *    author:  raj_001
 *    created: 2024-07-19 10:19:41
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

const int mxN = 1e5 + 9;
int a[mxN], t[4 * mxN];
//
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
    t[n] = t[l] + t[r];
}
//
void update(int n, int b, int e, int p, int v)
{
    if (p < b || p > e)
    {
        return;
    }
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
int query(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
        return 0;
    if (b >= i && e <= j)
        return t[n];
    int m = (b + e) / 2, l = 2 * n, r = 2 * n + 1;
    return query(l, b, m, i, j) + query(r, m + 1, e, i, j);
}
//
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // for(int &v:a)cin>>v;;
    build(1, 1, n);
    // update(1, 1, n, 8, 10);
    for (int i = 1; i < n * 2; i++)
        cout << t[i] << " ";

    cout << nl;
    // update(1, 1, n, 5, 1);
    // cout << query(1, 1, n, 1, 5) << nl;
    // cout << "build complete";
    // for (int i = 1; i < n * 2; i
    // cout << t[12];
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}