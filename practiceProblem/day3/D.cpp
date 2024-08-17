/**
 *    author:  raj_001
 *    created: 2024-08-12 12:46:04
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
    int n;
    cin >> n;
    vector<int> a(n + 1), mx(1002);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mx[a[i]] = i;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            if (mx[i] > 0 && mx[j] > 0 && __gcd(i, j) == 1)
            {
                ans = max(ans, (mx[i] + mx[j]));
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