/**
 *    author:  raj_001
 *    created: 2024-08-10 21:53:45
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
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    //
    int ans = 0;
    for (int i = 29; i >= 0; i--)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] >= (1 << i) && a[j] < (1 << (i + 1)))
            {
                cnt++;
            }
        }
        ans += ((cnt * (cnt - 1)) / 2);
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