/**
 *    author:  raj_001
 *    created: 2024-06-08 22:31:08
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n), p(n + 1);
    p[0] = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++)
    {
        p[i] = p[i - 1] + a[i - 1];
    }
    reverse(p.begin(), p.end());
    // for (int v : p)
    //     cout << v << " ";
    int it = 0, total, neg, sum;
    int ans = INT_MIN;
    while (it <= k)
    {
        total = p[it];
        if (x + it <= n)
        {
            neg = total - p[x + it];
            sum = p[x + it] - neg;
            ans = max(ans, sum);
        }
        else
        {
            neg = total;
            sum = -total;
            ans = max(ans, sum);
        }
        it++;
    }
    cout << ans << nl;
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