/**
 *    author:  raj_001
 *    created: 2024-06-02 10:11:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt = count(s.begin(), s.end(), '1');
    vector<bool> v(4);
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == '1')
            v[i] = 1;
    }
    if (cnt == 1)
        cout << 11 << nl;
    else if (cnt == 3)
        cout << 231 << nl;
    else if (cnt == 4)
        cout << 441 << nl;
    else
    {
        if (v[0] == v[1] == 1 || v[2] == v[3] == 1)
            cout << 21 << nl;
        else
            cout << 121 << nl;
    }
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