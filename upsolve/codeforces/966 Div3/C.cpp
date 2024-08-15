/**
 *    author:  raj_001
 *    created: 2024-08-15 15:39:15
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int q;
    cin >> q;
    // cout << mp[3] << nl;
    /*LAMDA FUNCTION*/
    auto isValid = [&](const string &s) -> bool
    {
        if (sz(s) != n)
            return 0;
        map<char, int> charToInt;
        map<int, char> intToChar;

        for (int j = 0; j < n; j++)
        {
            const char c = s[j];
            const int v = a[j];
            if (charToInt.count(c) && charToInt[c] != v)
                return false;
            if (intToChar.count(v) && intToChar[v] != c)
                return false;
            charToInt[c] = v;
            intToChar[v] = c;
        }
        return true;
    };
    /*LAMDA FUNCTION*/
    while (q--)
    {
        unordered_map<int, char> mp;
        vector<bool> used(26);
        string s, t = "";
        cin >> s;
        if (isValid(s))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
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