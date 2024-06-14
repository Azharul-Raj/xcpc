/**
 *    author:  raj_001
 *    created: 2024-06-14 23:34:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    x ^= y;
    cout << (x & -x) << nl;
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