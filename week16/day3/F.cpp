/**
 *    author:  raj_001
 *    created: 2024-07-15 11:07:12
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin >> s;
    int z = count(s.begin(), s.end(), '0');
    int o = count(s.begin(), s.end(), '1');
    if (z == 0 || o == 0)
    {
        cout << "NET" << nl;
    }
    else
    {
        int pair = min(z, o);
        // cout << pair << nl;
        if (pair % 2)
            cout << "DA" << nl;
        else
            cout << "NET" << nl;
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