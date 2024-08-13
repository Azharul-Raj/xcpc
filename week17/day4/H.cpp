/**
 *    author:  raj_001
 *    created: 2024-08-13 08:48:39
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
    int cnt = 0;
    for (int &v : a)
    {
        cin >> v;
        if (v == 1)
            cnt++;
    }
    int spl = cnt / 2;
    if (cnt % 2)
    {
        spl++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            spl++;
        }
    }
    cout << spl << nl;
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