/**
 *    author:  raj_001
 *    created: 2024-06-29 23:03:27
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    //
    for (int i = 0; i < n; i++)
    {
        mp[a[i] % m]++;
    }
    //
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int mod = (m - (b[i] % m)) % m;
        ans += mp[mod];
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