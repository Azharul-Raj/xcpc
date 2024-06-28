/**
 *    author:  raj_001
 *    created: 2024-06-28 00:19:25
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = min(a.size(), b.size());
    int u = a.size() - 1, d = b.size() - 1, i = 0;
    while (i <= n)
    {
        if (a[u] == b[d])
        {
            u--, d--;
            i++;
            if (u < 0 || d < 0)
            {
                break;
            }
        }
        else
        {
            break;
        }

        // i++;
    }
    int ans = (a.size() - i) + (b.size() - i);
    cout << ans << nl;
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