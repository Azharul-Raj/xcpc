/**
 *    author:  raj_001
 *    created: 2024-06-09 18:54:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), f, s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << a[i] << " ";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
            cout << a[i] << " ";
    }
}

int main()
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