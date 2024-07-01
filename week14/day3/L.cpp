/**
 *    author:  raj_001
 *    created: 2024-07-01 22:06:00
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> up, lo;
    vector<bool> mp(s.size() + 1);
    for (int i = 0; i < s.size(); i++)
    {
        mp[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b' && !lo.empty())
        {
            mp[lo.back()] = 1;
            lo.pop_back();
        }
        else if (s[i] == 'B' && !up.empty())
        {
            mp[up.back()] = 1;
            up.pop_back();
        }
        else if (isupper(s[i]))
        {
            up.push_back(i);
        }
        else if (islower(s[i]))
        {
            lo.push_back(i);
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b' || s[i] == 'B')
            continue;
        else
        {
            if (mp[i] == 0)
                cout << s[i];
        }
    }
    cout << nl;
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