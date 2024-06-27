/**
 *    author:  raj_001
 *    created: 2024-06-27 21:26:07
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool evn = 1, odd = 1;
    for (int v : a)
    {
        if (v % 2)
        {
            evn = 0;
            break;
        }
    }
    for (int v : a)
    {
        if (v % 2 == 0)
        {
            odd = 0;
            break;
        }
    }

    if (evn || odd)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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