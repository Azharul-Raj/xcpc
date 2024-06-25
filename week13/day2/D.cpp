/**
 *    author:  raj_001
 *    created: 2024-06-25 08:11:33
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;
    if ((y + d < m and x - d > 1) || (x + d < n && y - d > 1))
    {
        cout << (m + n - 2) << nl;
    }
    else
        cout << -1 << nl;
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