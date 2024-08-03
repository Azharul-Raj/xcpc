/**
 *    author:  raj_001
 *    created: 2024-07-17 09:12:00
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

map<int, int> cnt;

void fact(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                // cout << i << " ";
                cnt[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
        cnt[n]++;
}

void solve()
{
    int n;
    cin >> n;
    fact(n);
    for (auto [x, y] : cnt)
    {
        cout << x << " " << y << nl;
    }
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