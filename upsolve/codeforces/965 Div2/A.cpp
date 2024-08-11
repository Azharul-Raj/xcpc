/**
 *    author:  raj_001
 *    created: 2024-08-10 21:33:56
 **/
// https://codeforces.com/contest/1998/problem/a
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (k % 2)
    {
        cout << x << " " << y << nl;
        k--;
    }
    for (int i = 1; i <= k / 2; i++)
    {
        cout << x - i << " " << y << nl;
        cout << x + i << " " << y << nl;
    }
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