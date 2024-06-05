/**
 *    author:  raj_001
 *    created: 2024-06-05 15:43:46
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    map<int, int> mp;
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < d; i++)
    {
        mp[a[i]]++;
    }
    int ans = n + 1;
    int l = 0, r = d - 1, prev;
    int sz;
    while (r < n)
    {
        sz = mp.size();
        ans = min(ans, sz);
        prev = a[l];
        l++;
        r++;

        mp[a[r]]++;
        if (mp[prev] == 1)
            mp.erase(prev);
        else
            mp[prev]--;
    }
    cout << ans << nl;
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