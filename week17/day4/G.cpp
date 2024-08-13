/**
 *    author:  raj_001
 *    created: 2024-08-12 22:08:18
 **/
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n * k);
    for (int i = 0; i < n * k; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    reverse(all(a));
    int s;
    int sub = k;
    if (n % 2)
    {
        s = n / 2;
        for (int i = s; i < n * k; i += (n / 2) + 1)
        {
            ans += a[i];
            sub--;
            if (sub == 0)
            {
                break;
            }
        }
    }
    else
    {
        s = n / 2;
        for (int i = s; i < n * k; i += (n / 2) + 1)
        {
            ans += a[i];
            sub--;
            if (sub == 0)
            {
                break;
            }
        }
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