/**
 *    author:  raj_001
 *    created: 2024-07-16 10:31:57
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int x;
    cin >> x;
    int cnt = 1;
    int i = 1;
    while (cnt <= x)
    {
        cnt = (1 << i);
        i++;
    }
    cout << x - (cnt - x) << nl;
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