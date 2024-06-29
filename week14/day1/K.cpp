/**
 *    author:  raj_001
 *    created: 2024-06-29 08:30:39
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

int lcm(int a, int b)
{
    return ((a * b) / __gcd(a, b));
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if (b % a == 0)
    {
        cout << (b * b) / a << nl;
    }
    else
    {
        cout << lcm(a, b) << nl;
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