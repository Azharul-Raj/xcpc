/**
 *    author:  raj_001
 *    created: 2024-06-30 08:24:52
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
    vector<int> a(n), b(n), ans(n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    //
    for (int i = 0; i < n; i++)
    {
        vp.push_back({b[i], a[i]});
    }
    //
    sort(vp.begin(), vp.end());
    //
    ans[0] = vp[0].second;
    for (int i = 1; i < n; i++)
    {
        int total = vp[i - 1].first + vp[i].second;
        ans[i] = total;
    }
    int sum = 0;
    for (int v : ans)
    {
        sum += v;
    }
    //
    cout << sum << nl;
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