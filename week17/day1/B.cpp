/**
 *    author:  raj_001
 *    created: 2024-08-17 06:17:03
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
    int n = sz(s);
    int r = -1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] > '0')
        {
            r = i;
            break;
        }
    }
    if (r == -1)
    {
        cout << r << nl;
        return;
    }
    string t = "", tt = "";
    for (int i = 0; i < r; i++)
    {
        t += s[i];
    }
    for (int i = r; i < n; i++)
    {
        tt += s[i];
    }

    //
    // cout << t << " " << tt << nl;
    int a = stoi(t), b = stoi(tt);
    if (b > a)
    {
        cout << t << " " << tt << nl;
    }
    else
        cout << -1 << nl;
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