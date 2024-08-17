/**
 *    author:  raj_001
 *    created: 2024-08-13 15:49:31
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> cnt(k + 1, 0), ans;
    set<int> sa, sb, sab;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= k)
        {
            sa.insert(a[i]);
            sab.insert(a[i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (b[i] <= k)
        {
            sb.insert(b[i]);
            sab.insert(b[i]);
        }
    }
    if (sa.size() < k / 2 || sb.size() < k / 2)
    {
        cout << "NO" << nl;
    }
    else if (sab.size() < k)
    {
        cout << "NO" << nl;
    }
    else
        cout << "YES" << nl;
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