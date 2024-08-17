/**
 *    author:  raj_001
 *    created: 2024-08-17 10:25:20
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
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);
    int ans = b;
    for (int &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        ans += min(a - 1, v[i]);
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