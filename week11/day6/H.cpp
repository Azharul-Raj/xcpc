/**
 *    author:  raj_001
 *    created: 2024-06-07 23:51:45
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    ll n, h;
    cin >> n >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 1e18, sum;
    while (r >= l)
    {
        ll mid = (r + l) / 2;
        sum = mid;
        for (int i = 1; i < n; i++)
        {
            sum += min<int64_t>(mid, a[i] - a[i - 1]);
        }
        if (sum < h)
        {

            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << l << nl;
}

int main()
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