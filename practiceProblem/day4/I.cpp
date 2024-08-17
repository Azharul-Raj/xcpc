/**
 *    author:  raj_001
 *    created: 2024-08-13 11:09:39
 **/
#include <bits/stdc++.h>
#define nl '\n'
// #define int long long int
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
    for (int &i : a)
        cin >> i;
    unordered_map<int, int> mp;
    int l = 0, r = 1;
    while (l < n && r < n)
    {
        if (a[l] != a[r])
        {
            // vp.pb({l + 1, r + 1});
            mp[l + 1] = r + 1;
            l++;
        }
        else
            r++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (mp.find(l) != mp.end() && mp[l] <= r)
        {
            cout << l << " " << mp[l] << nl;
        }
        else
            cout << -1 << " " << -1 << nl;
    }
    cout << nl;
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