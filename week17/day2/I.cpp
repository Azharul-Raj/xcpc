/**
 *    author:  raj_001
 *    created: 2024-08-18 19:57:42
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
// #define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    set<int> f, all, l;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (all.count(a[i]) == 0)
            f.insert(i);
        all.insert(a[i]);
        mp[a[i]] = i;
    }
    //
    for (auto [x, y] : mp)
    {
        l.insert(y);
    }
    //
    int cnt = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (l.count(i))
            cnt++;
        if (f.count(i))
            ans += cnt;
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