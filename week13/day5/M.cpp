/**
 *    author:  raj_001
 *    created: 2024-06-27 23:51:18
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x = -1, y = -1;
    int cnt1 = 0, cnt2 = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt1++;
            if (cnt2 > 0)
                y = cnt2;
            // cout << "1 " << y << " " << x << nl;
            cnt2 = 0;
            if (x > 0 && y > 0)
            {
                ans = max(ans, min(x, y));
            }
        }
        else if (a[i] == 2)
        {
            cnt2++;
            if (cnt1 > 0)
                x = cnt1;
            // cout << "2 " << x << " " << y << nl;
            cnt1 = 0;
            if (x > 0 && y > 0)
            {
                ans = max(ans, min(x, y));
            }
        }
        // cout << i << " " << x << " " << y << nl;
    }
    //
    if (cnt1 > 0)
    {
        x = cnt1;
        ans = max(ans, min(x, y));
    }
    //
    if (cnt2 > 0)
    {
        y = cnt2;
        ans = max(ans, min(x, y));
    }
    cout << ans * 2 << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}