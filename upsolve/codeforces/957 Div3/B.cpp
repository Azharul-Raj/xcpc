/**
 *    author:  raj_001
 *    created: 2024-07-12 17:02:35
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int &a : a)
        cin >> a;
    // for (int v : a)
    sort(a.begin(), a.end());
    a.pop_back();
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 1)
        {
            cnt += a[i];
            cnt += (a[i] - 1);
        }
        else
            cnt++;
    }
    cout << cnt << nl;
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