/**
 *    author:  raj_001
 *    created: 2024-06-25 17:36:15
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

int calculate(vector<int> a, int k, int c)
{
    int cnt = 0;
    for (int i = 0; i < a.size();)
    {
        if (a[i] != c)
        {
            cnt++;
            i += k;
        }
        else
            i++;
    }
    return cnt;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //
    int ans = INT_MAX;
    for (int i = 1; i <= 100; i++)
    {
        ans = min(ans, calculate(a, k, i));
    }
    cout << ans << nl;
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