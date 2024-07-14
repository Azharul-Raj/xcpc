/**
 *    author:  raj_001
 *    created: 2024-07-14 10:01:36
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
    vector<int> a(n);
    for (int &v : a)
        cin >> v;

    int ans = -1;
    if (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end()))
    {
        ans = -1;
    }
    else
    {
        int v = *max_element(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == v)
            {
                if (a[i + 1] < a[i])
                {
                    ans = i + 1;
                    break;
                }
            }
        }
        //
        if (ans == -1)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (a[i] == v)
                {
                    if (a[i - 1] < a[i])
                    {
                        ans = i + 1;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << nl;
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