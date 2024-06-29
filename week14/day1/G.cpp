/**
 *    author:  raj_001
 *    created: 2024-06-29 21:50:08
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
    int n;
    cin >> n;
    if (n == 1)
        cout << 1 << nl;
    else if (n == 2)
    {
        cout << 3 << " " << 1 << nl;
    }
    else
    {
        if (n % 2)
        {
            for (int i = 0; i < n; i++)
                cout << n << " ";
            cout << nl;
        }
        else
        {
            for (int i = 0; i < n - 2; i++)
                cout << 2 << " ";
            cout << 3 << " " << 1 << nl;
        }
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