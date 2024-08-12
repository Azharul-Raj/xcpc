/**
 *    author:  raj_001
 *    created: 2024-08-12 18:39:13
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
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES" << nl;
        return;
    }

    int sPos = 2e5 + 1, tPos = 2e5 + 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            sPos = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (t[i] == '1')
        {
            tPos = i;
            break;
        }
    }
    //
    if (tPos < sPos)
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