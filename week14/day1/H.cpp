/**
 *    author:  raj_001
 *    created: 2024-06-29 22:01:58
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

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && o > 0)
            o--;
        else if (s[i] == '1' && z > 0)
            z--;
        else
            break;
    }
    cout << o + z << nl;
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