/**
 *    author:  raj_001
 *    created: 2024-06-11 10:03:53
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    vector<int> d(m);
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        mp[d[i]]++;
    }
    int last = d[m - 1];
    bool y = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == last)
            y = 1;
    }
    //
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (mp[b[i]] == 0)
            {
                y = 0;
                break;
            }
            else
            {
                mp[b[i]]--;
            }
        }
    }
    cout << (y ? "YES" : "NO") << nl;
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