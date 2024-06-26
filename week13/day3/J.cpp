/**
 *    author:  raj_001
 *    created: 2024-06-26 20:25:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int ai = b[i] + x;
        cout << ai << " ";
        x = max(ai, x);
    }
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