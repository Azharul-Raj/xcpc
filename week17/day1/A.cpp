/**
 *    author:  raj_001
 *    created: 2024-08-17 06:04:06
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
    int l = 0, r = n - 1;
    while (r >= l)
    {
        if (s[l] == 'B' && s[r] == 'B')
        {
            break;
        }

        if (s[l] == 'W')
        {
            l++;
        }
        else if (s[r] == 'W')
        {
            r--;
        }
    }
    // cout << l << " " << r << nl;
    r++;
    cout << (r - l) << nl;
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