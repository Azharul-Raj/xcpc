/**
 *    author:  raj_001
 *    created: 2024-06-10 18:05:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n % 2 == 0)
    {
        cout << 2 << nl;
        cout << 1 << " " << n << nl;
        cout << 1 << " " << n << nl;
    }
    else
    {
        cout << 4 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << 1 << " " << n - 1 << nl;
        cout << n - 1 << " " << n << nl;
        cout << n - 1 << " " << n << nl;
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