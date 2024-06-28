/**
 *    author:  raj_001
 *    created: 2024-06-28 12:10:48
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

bool isPalindrome(string s)
{
    int l = 0, r = s.size() - 1;
    bool y = 1;
    while (r >= l)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
        {
            y = 0;
            break;
        }
    }
    return y;
}

void solve()
{
    string s;
    cin >> s;
    cout << (isPalindrome(s));
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