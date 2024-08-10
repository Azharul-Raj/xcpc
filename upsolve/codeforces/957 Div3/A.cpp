/**
 *    author:  raj_001
 *    created: 2024-07-12 15:59:51
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
    vector<int> a(3);
    // int x,y,z;
    cin >> a[0] >> a[1] >> a[2];

    for (int i = 0; i < 5; i++)
    {
        (*min_element(a.begin(), a.end()))++;
    }
    int ans = 1;
    for (int v : a)
        ans *= v;
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