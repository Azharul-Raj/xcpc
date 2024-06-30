/**
 *    author:  raj_001
 *    created: 2024-06-30 07:44:25
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            mp[i + 1] = 1;
        }
    }
    //
    int mn = INT_MAX, mx = INT_MIN;
    for (auto [x, y] : mp)
    {
        mn = min(mn, x);
        mx = max(mx, x);
    }
    mn--;
    cout << mx - mn << nl;
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