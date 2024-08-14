/**
 *    author:  raj_001
 *    created: 2024-08-14 17:52:25
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
    vector<int> a(n), b;
    int sum = 0;
    for (int &v : a)
    {
        cin >> v;
        sum += abs(v);
        if (v != 0)
        {
            b.pb(v);
        }
    }

    vector<int> idx;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] < 0)
        {
            idx.pb(i);
        }
    }
    int ans = 0;
    for (int i = 1; i < idx.size(); i++)
    {
        int d = idx[i] - idx[i - 1];
        if (d > 1)
        {
            ans++;
        }
    }
    //
    // cout << idx[0] << nl;
    if (idx.size() == 0)
        cout << sum << " " << 0 << nl;
    else if (b[0] < 0 || idx[0] > 0)
    {
        cout << sum << " " << ans + 1 << nl;
    }
    else
        cout << sum << " " << ans << nl;
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