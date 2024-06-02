/**
 *    author:  raj_001
 *    created: 2024-06-02 10:18:30
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n), pref(n);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a[i] = -1;
        else
            a[i] = 1;
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    for (int v : pref)
        cout << v << " ";
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