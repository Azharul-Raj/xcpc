/**
 *    author:  raj_001
 *    created: 2024-08-03 12:59:51
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back

int n, k;
vector<int> a;
bool good(double x)
{
    int piece = 0;
    for (int i = 0; i < n; i++)
    {
        piece += (a[i] / x);
    }
    return piece >= k;
}

void solve()
{
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    double l = 0, r = 1e8;

    for (int i = 0; i < 100; i++)
    {
        double m = (r + l) / 2;
        if (good(m))
            l = m;
        else
            r = m;

        cout << i << " " << l << " " << r << nl;
    }
    cout << setprecision(10) << r << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}