/**
 *    author:  raj_001
 *    created: 2024-06-28 12:03:22
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
//
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
    int n, m;
    cin >> n >> m;
    vector<string> a, l, r;
    unordered_map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    //
    for (int i = 0; i < a.size(); i++)
    {
        string curr = a[i];
        reverse(curr.begin(), curr.end());
        for (int j = 0; j < a.size(); j++)
        {
            if (i == j)
                continue;
            if (mp[j] == 0 && a[j] == curr)
            {
                mp[j] = 1;
                mp[i] = 1;
                l.push_back(a[i]);
                r.push_back(curr);
            }
        }
    }
    //
    string mid = "1";
    for (int i = 0; i < n; i++)
    {
        if (mp[i] == 0 && isPalindrome(a[i]))
        {
            mid = a[i];
            break;
        }
    }
    int ans = 0;
    reverse(r.begin(), r.end());
    string mainStr = "";
    for (string s : l)
    {
        ans += s.size();
        mainStr += s;
    }
    if (mid != "1")
    {
        ans += mid.size();
        mainStr += mid;
    }
    for (string s : r)
    {
        ans += s.size();
        mainStr += s;
    }
    cout << ans << nl;
    cout << mainStr << nl;
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