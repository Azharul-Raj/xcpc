/**
 *    author:  raj_001
 *    created: 2024-06-14 21:35:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> mono(n), poly(m), ans;
    int len = k;
    for (int i = 0; i < n; i++)
    {
        cin >> mono[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> poly[i];
    }
    bool y = 1;
    int times = m + n;
    int f = 0, s = 0;
    while (times--)
    {
        if (f < n && s < m)
        {
            if (mono[f] == 0)
            {
                len++;
                ans.push_back(0);
                f++;
            }
            else if (poly[s] == 0)
            {
                len++;
                ans.push_back(0);
                s++;
            }
            else if (mono[f] <= len)
            {
                ans.push_back(mono[f]);
                f++;
            }
            else if (poly[s] <= len)
            {
                ans.push_back(poly[s]);
                s++;
            }
            else
            {
                y = 0;
                break;
            }
        }
        else if (f == n && s < m)
        {
            if (poly[s] == 0)
            {
                len++;
                ans.push_back(0);
                s++;
            }
            else if (poly[s] <= len)
            {
                ans.push_back(poly[s]);
                s++;
            }
            else
            {
                y = 0;
                break;
            }
        }
        else if (s == m && f < n)
        {
            if (mono[f] == 0)
            {
                len++;
                ans.push_back(0);
                f++;
            }
            else if (mono[f] <= len)
            {
                ans.push_back(mono[f]);
                f++;
            }
            else
            {
                y = 0;
                break;
            }
        }
    }
    if (y)
    {
        for (int v : ans)
            cout << v << " ";
    }
    else
        cout << -1;
    cout << nl;
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