/**
 *    author:  raj_001
 *    created: 2024-07-14 08:41:13
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

bool isP(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    int x;
    cin >> x;
    if (isP(x))
    {
        int val = x + 1;
        while (!isP(val))
        {
            val++;
        }
        cout << x * val << nl;
    }
    else
    {
        int v = x + 1;
        while (!isP(v))
        {
            v++;
        }
        int v2 = v + 1;
        while (!isP(v2))
        {
            v2++;
        }
        // cout << v << " " << v2 << nl;
        cout << v * v2 << nl;
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