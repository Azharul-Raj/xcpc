/**
 *    author:  raj_001
 *    created: 2024-06-22 18:30:49
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
const int N = 1e5 + 5;
vector<int> a(N), l(N), r(N), d(N), pref(N), diff(N);
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    //
    for (int i = 1; i <= m; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    //
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        pref[x]++;
        pref[y + 1]--;
    }
    //
    //
    for (int i = 1; i <= m; i++)
    {
        pref[i] = pref[i] + pref[i - 1];
    }
    //
    for (int i = 1; i <= n; i++)
    {
        diff[i] = a[i] - a[i - 1];
    }
    //
    for (int i = 1; i <= m; i++)
    {
        diff[l[i]] += pref[i] * d[i];
        diff[r[i] + 1] -= pref[i] * d[i];
    }
    //
    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + diff[i];
    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}