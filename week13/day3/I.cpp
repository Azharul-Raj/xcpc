/**
 *    author:  raj_001
 *    created: 2024-06-26 11:21:10
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

vector<int> once = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
map<int, int> mp;
void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (auto [x, y] : mp)
    {
        if (x > n)
            break;
        else
        {
            cnt++;
        }
    }
    cout << cnt << nl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int v : once)
    {
        for (int i = 1; i < 10; i++)
        {
            mp[v * i] = 1;
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}