/**
 *    author:  raj_001
 *    created: 2024-06-15 21:55:48
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    map<int, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    bool possible = 1;
    ll tvs = 0;
    for (auto [x, y] : mp)
    {
        tvs += y;

        // cout << tvs << nl;
        if (tvs > 2)
        {
            possible = 0;
        }
    }
    cout << (possible ? "YES" : "NO") << nl;
}

int main()
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