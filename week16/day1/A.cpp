/**
 *    author:  raj_001
 *    created: 2024-07-13 22:50:05
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

int mat[10][10];

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
                ans += mat[i][j];
            }
        }

        // cout << nl;
    }
    cout << ans << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || j == 0 || i == 9 || j == 9)
            {
                mat[i][j] = 1;
            }
            else if (i == 1 || j == 1 || i == 8 || j == 8)
            {
                mat[i][j] = 2;
            }
            else if (i == 2 || j == 2 || i == 7 || j == 7)
            {
                mat[i][j] = 3;
            }
            else if (i == 3 || j == 3 || i == 6 || j == 6)
            {
                mat[i][j] = 4;
            }
            else
            {
                mat[i][j] = 5;
            }
        }
    }
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}