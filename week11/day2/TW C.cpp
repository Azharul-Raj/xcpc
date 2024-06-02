/**
 *    author:  raj_001
 *    created: 2024-06-02 20:18:31
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), d(n + 2);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d[l] += 1;
        d[r + 1] -= 1;
    }
    //
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i] + d[i - 1];
    }
    //
    sort(a.begin(), a.end(), greater<ll>());
    sort(d.begin(), d.end(), greater<ll>());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (a[i] * d[i]);
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}