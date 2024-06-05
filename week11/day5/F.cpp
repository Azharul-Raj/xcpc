/**
 *    author:  raj_001
 *    created: 2024-06-05 12:41:16
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int order = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - 1) == order)
            order++;
    }
    // int v = ceil((float)5 / (float)2);
    int rest = n - order;
    int ans = ceil((float)rest / (float)k);
    cout << ans << nl;
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