/**
 *    author:  raj_001
 *    created: 2024-06-29 15:41:17
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    while (k > 0 && x > 1)
    {
        int rem = y - (x % y);
        if (rem >= k)
        {
            x += k;
            k = 0;
        }
        else
        {
            k -= rem;
            x += rem;
        }
        while (x % y == 0)
        {
            x /= y;
        }
    }
    if (k > 0)
    {
        k %= (y - 1);
        x += k;
        while (x % y == 0)
            x /= y;
    }
    cout << x << nl;
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