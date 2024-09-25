/**
 *    author:  raj_001
 *    created: 2024-09-25 11:41:51
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll n = 1, cnt = 0;
    while ((l + (n * (n - 1)) / 2) <= r)
    {
        n++;
        cnt++;
    }
    cout << cnt << nl;
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