/**
 *    author:  raj_001
 *    created: 2024-08-12 15:44:53
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
    string s;
    cin >> s;
    string ss = "";
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0 && s[i] == '1')
        {
            ss += '1';
        }
        if (cnt > 0 && s[i] == '1')
        {
            ss += "01";
            cnt = 0;
        }
        if (s[i] == '0')
            cnt++;
    }
    if (cnt > 0)
    {
        ss += '0';
    }
    int c0 = count(all(ss), '0');
    int c1 = count(all(ss), '1');
    if (c1 > c0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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