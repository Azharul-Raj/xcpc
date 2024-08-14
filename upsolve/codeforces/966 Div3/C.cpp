/**
 *    author:  raj_001
 *    created: 2024-08-14 11:27:36
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
    vector<int> a(n), pref(n);
    for (int &v : a)
        cin >> v;
    string s;
    cin >> s;
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }

    vector<pair<int, int>> vp;

    int l = 0, r = n - 1;
    while (r > l)
    {
        if (s[l] == 'L' && s[r] == 'R')
        {
            vp.pb({l, r});
            l++;
            r--;
        }
        else if (s[l] == 'L' && s[r] == 'L')
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    int ans = 0;
    for (auto v : vp)
    {
        int r = pref[v.second];
        int l;
        int idx = v.first;
        if (idx == 0)
        {
            l = 0;
        }
        else
        {
            idx--;
            l = pref[idx];
        }
        ans += (r - l);
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