/**
 *    author:  raj_001
 *    created: 2024-06-09 16:08:33
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    int ps, pe;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (i == 0)
        {
            ps = a;
            pe = b;
        }
        else
        {
            vp.push_back({a, b});
        }
    }
    bool possible = 1;
    //
    for (auto [s, e] : vp)
    {
        if (s >= ps)
        {
            if (e >= pe)
            {
                possible = 0;
                break;
            }
        }
    }
    cout << (possible ? ps : -1) << nl;
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