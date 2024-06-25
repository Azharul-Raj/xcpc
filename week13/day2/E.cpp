/**
 *    author:  raj_001
 *    created: 2024-06-25 11:27:17
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x = ceil(sqrt(n));
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    else if (n == 2)
    {
        cout << 1 << nl;
        return;
    }
    else
    {
        int v = (n - 1) / x;
        cout << v + (x - 1) << nl;
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