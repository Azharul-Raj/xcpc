/**
 *    author:  raj_001
 *    created: 2024-06-30 18:50:16
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

double upTo = 1e-6;

void solve()
{
    double n;
    cin >> n;
    double l = 0, r = n;
    while (r - l > upTo)
    {
        double mid = r + l / 2;
        if (mid * mid < n)
        {
            l = mid;
        }
        else
            r = mid;
    }
    cout << l << " " << r << nl;
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