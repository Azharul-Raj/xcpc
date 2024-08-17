/**
 *    author:  raj_001
 *    created: 2024-08-17 22:26:28
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    int ans = 0;

    for (int tt = 0; tt < 2; tt++)
    {
        int mx = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            ans += a[i];
            mp[a[i]]++;
            if (mp[a[i]] >= 2)
            {
                mx = max(mx, a[i]);
            }
            a[i] = mx;
        }
    }
    //
    for (int i = 0; i < n; i++)
    {
        ans += (n - i) * a[i];
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