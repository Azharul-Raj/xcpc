/**
 *    author:  raj_001
 *    created: 2024-06-03 14:58:50
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (is_sorted(a.begin(), a.end()))
        cout << "YES" << nl;
    else
    {
        vector<int> f, s, ans;
        f.push_back(a[0]);
        int idx = n;
        for (int i = 1; i < n; i++)
        {
            if (f[i - 1] <= a[i])
            {
                f.push_back(a[i]);
            }
            else
            {
                idx = i;
                break;
            }
        }
        for (int i = idx; i < n; i++)
            s.push_back(a[i]);
        for (int v : s)
            ans.push_back(v);
        for (int v : f)
            ans.push_back(v);
        if (is_sorted(ans.begin(), ans.end()))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
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