/**
 *    author:  raj_001
 *    created: 2024-07-17 09:06:37
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    if (isPrime(n))
        cout << "Prime Number" << nl;
    else
        cout << "Not A Prime Number" << nl;
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