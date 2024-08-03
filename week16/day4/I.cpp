/**
 *    author:  raj_001
 *    created: 2024-07-16 18:10:49
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    bool y = 0;
    if (bx < ax && by < ay && cx < ax && cy < ay)
    {
        y = 1;
    }
    else if (bx < ax && by > ay && cx < ax && cy > ay)
    {
        y = 1;
    }
    else if (bx > ax && by < ay && cx > ax && cy < ay)
    {
        y = 1;
    }
    else if (bx > ax && by > ay && cx > ax && cy > ay)
    {
        y = 1;
    }
    cout << (y ? "YES" : "NO") << nl;
}

int32_t main()
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