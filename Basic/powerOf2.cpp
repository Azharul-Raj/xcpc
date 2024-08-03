/**
 *    author:  raj_001
 *    created: 2024-07-17 09:08:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

bool isPowerOfTwo(int n)
{
    return !(n & n - 1);
}

void solve()
{
    int n;
    cin >> n;
    cout << isPowerOfTwo(n);
}

int32_t main()
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