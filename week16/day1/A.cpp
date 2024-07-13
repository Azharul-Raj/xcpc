/**
 *    author:  raj_001
 *    created: 2024-07-13 22:50:05
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    vector<string> a(10);
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    // //
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i][j] == 'X')
            {
                ans += min(min(i + 1, 10 - i), min(j + 1, 10 - j));
            }
        }
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