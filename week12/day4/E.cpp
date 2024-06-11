/**
 *    author:  raj_001
 *    created: 2024-06-11 08:26:11
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int sum = 0;
    if (k > n || k > (x + 1))
        cout << -1 << nl;
    else
    {
        sum = ((k - 1) * k) / 2;
        if (k == x)
        {
            sum += (n - k) * (x - 1);
        }
        else
        {
            sum += (n - k) * x;
        }
        cout << sum << nl;
    }
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