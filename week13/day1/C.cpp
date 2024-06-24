/**
 *    author:  raj_001
 *    created: 2024-06-24 23:04:31
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if (a >= b)
    {
        ans = n * a;
    }
    else if ((b - a) > n)
    {
        int tot = b * (b + 1) / 2;
        int mex = b - n;
        int ex = mex * (mex + 1) / 2;
        ans = (tot - ex);
        // cout << mex << " " << tot << " " << ex << nl;
    }
    else
    {
        ans = (b * (b + 1) / 2) - (a * (a + 1) / 2);
        int rest = n - (b - a);
        ans += (rest * a);
    }
    cout << ans << nl;
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