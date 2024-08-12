/**
 *    author:  raj_001
 *    created: 2024-08-12 11:54:25
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

int h, n;
vector<int> p, c;

bool good(int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ((m / c[i]) * p[i]);
    }
    return sum >= h;
}

void solve()
{
    cin >> h >> n;
    p.resize(n), c.resize(n);

    for (int &v : p)
    {
        cin >> v;
        h -= v;
    }
    for (int &v : c)
        cin >> v;

    if (h <= 0)
    {
        cout << 1 << nl;
        return;
    }
    int l = 0, r = 2, ans = 0;
    while (!good(r))
        r *= 2;

    while (r >= l)
    {
        int m = (l + r) / 2;
        if (good(m))
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << ans + 1 << nl;
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