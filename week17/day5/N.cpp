/**
 *    author:  raj_001
 *    created: 2024-08-15 09:38:55
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
    for (int &v : a)
        cin >> v;
    if (is_sorted(all(a)))
        cout << 0 << nl;
    else if (a[0] == n && a[n - 1] == 1)
    {
        cout << 3 << nl;
    }
    else if (a[0] == 1 || a[n - 1] == n)
        cout << 1 << nl;
    else
        cout << 2 << nl;
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