/**
 *    author:  raj_001
 *    created: 2024-08-10 19:55:50
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
    int l = 0, r = 0;
    for (int i = 0; i < 31; i++)
    {
        if (1 << i & n)
        {
            l += r;
            r = (1 << i);
        }
    }
    cout << l << " " << r << nl;
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