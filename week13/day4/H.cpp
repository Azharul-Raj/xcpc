/**
 *    author:  raj_001
 *    created: 2024-06-26 09:25:27
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

bool isPalindrome(string s)
{
    string ns = s;
    reverse(ns.begin(), ns.end());
    return (s == ns);
}

void solve()
{
    string s;
    cin >> s;
    cout << isPalindrome(s) << nl;
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