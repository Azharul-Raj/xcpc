/**
 *    author:  raj_001
 *    created: 2024-08-15 11:14:50
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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    //
    int l = 0, r = n - 1;
    int mn = 1, mx = n;
    while (r > l)
    {
        if (a[l] == mn)
        {
            l++;
            mn++;
        }
        else if (a[l] == mx)
        {
            l++;
            mx--;
        }
        else if (a[r] == mn)
        {
            r--;
            mn++;
        }
        else if (a[r] == mx)
        {
            r--;
            mx--;
        }
        else
        {
            break;
        }
    }
    if (l < r)
        cout << l + 1 << " " << r + 1 << nl;
    else
        cout << -1 << nl;
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