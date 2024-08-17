/**
 *    author:  raj_001
 *    created: 2024-08-17 10:49:24
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), pref(n);
    for (int &v : a)
        cin >> v;
    //
    int f = a.front(), l = a.back();
    if (f == l)
    {
        pref[0] = 1;
    }
    // Prefix sum section
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + (a[i] == l);
    }
    // prefix sum section end

    if (l == f)
    {
        if (pref[n - 1] >= k)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
        return;
    }
    //
    int valCount = 0, idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            valCount++;
        }
        if (valCount == k)
        {
            idx = i;
            break;
        }
    }
    int lastValCount = pref[n - 1] - pref[idx];
    if (idx == -1 || lastValCount < k)
        cout << "NO" << nl;
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