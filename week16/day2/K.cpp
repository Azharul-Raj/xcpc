/**
 *    author:  raj_001
 *    created: 2024-07-14 08:54:50
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = n;
    for (int &v : a)
        cin >> v;
    for (int i = 0; i < 32; i++)
    {
        int val = (1 << i) - 1;
        int tot = 0;
        int ele = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > val)
                continue;
            ele++;
            tot |= a[j];
        }
        int rest = n;
        // cout << tot << nl;
        if (val == tot)
        {
            rest -= ele;
        }
        ans = min(rest, ans);
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