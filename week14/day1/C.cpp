/**
 *    author:  raj_001
 *    created: 2024-06-28 23:18:42
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
    vector<int> a;
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        int l = 0, r = n - 1;
        while (r >= l)
        {
            if (a[l] == a[r])
                cout << a[l] << " ";
            else
            {
                cout << a[r] << " " << a[l] << " ";
            }
            r--;
            l++;
        }
    }
    cout << nl;
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