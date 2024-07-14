/**
 *    author:  raj_001
 *    created: 2024-07-14 18:07:39
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    int ans = -1, mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (mx + 1 < a[i])
        {
            ans = i + 1;
            break;
        }
        mx = max(mx, a[i]);
    }
    cout << ans << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}