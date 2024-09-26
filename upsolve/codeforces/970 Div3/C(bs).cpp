/**
 *    author:  raj_001
 *    created: 2024-09-25 12:37:44
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;

ll a, b;
bool good(ll x)
{
    return (x > b);
}

void solve()
{
    cin >> a >> b;

    ll l = 0, r = 2, ans = 0;
    while (!good(r))
        r *= 2;
    b -= a;
    while (r >= l)
    {
        ll m = l + ((r - l) / 2);
        if (m * (m - 1) / 2 <= b)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << ans << nl;
}

int main()
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