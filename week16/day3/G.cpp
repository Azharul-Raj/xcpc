/**
 *    author:  raj_001
 *    created: 2024-07-15 11:39:27
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == c && (b + d) == a) || (a == d && (b + c) == a) || (b == d && (a + c) == b) || b == c && (a + d) == b)
    {
        cout << "Yes" << nl;
    }
    else
        cout << "No" << nl;
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