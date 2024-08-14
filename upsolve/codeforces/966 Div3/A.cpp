/**
 *    author:  raj_001
 *    created: 2024-08-13 20:43:14
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
    string s;
    cin >> s;
    string pre = s.substr(0, 2);
    if (s.size() <= 2)
        cout << "NO" << nl;
    else
    {
        if ((pre == "10" && sz(s) == 3 && s[2] > '1') || (pre == "10" && sz(s) >= 4 && s[2] > '0'))
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO" << nl;
    }
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