/**
 *    author:  raj_001
 *    created: 2024-06-27 21:43:28
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n > 0)
    {
        if (n % k)
        {
            cnt += (n % k);
            n -= (n % k);
        }
        else
        {
            n /= k;
            cnt++;
        }
    }
    cout << cnt << nl;
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