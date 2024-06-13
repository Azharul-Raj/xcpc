/**
 *    author:  raj_001
 *    created: 2024-06-05 21:53:27
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll totalDiff = 0;
    for (int i = 1; i < n; i++)
    {
        totalDiff += abs(a[i - 1] - a[i]);
    }

    ll ans = totalDiff;
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    else if (n == 2)
    {
        ll diff1 = abs(1 - a[0]);
        ll diff2 = abs(1 - a[1]);
        ll diff3 = abs(k - a[0]);
        ll diff4 = abs(a[1] - k);
        cout << max(max(diff1, diff2), max(diff3, diff4)) << nl;
        return;
    }
    else
    {
        ll actualDiff, diffWithLow, diffWithHigh, sum1, sum2;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                actualDiff = abs(a[i] - a[i + 1]);
                diffWithLow = abs(a[1] - 1);
                diffWithHigh = abs(a[1] - k);
            }
            else if (i == n - 1)
            {
                actualDiff = abs(a[i - 1] - a[i]);
                diffWithLow = abs(a[i - 1] - 1);
                diffWithHigh = abs(a[i - 1] - k);
            }
            else
            {

                actualDiff = abs(a[i] - a[i - 1]) + abs(a[i] - a[i + 1]);
                diffWithLow = abs(1 - a[i - 1]) + abs(1 - a[i + 1]);
                diffWithHigh = abs(k - a[i - 1]) + abs(k - a[i + 1]);
            }
            ll tmpTotal = totalDiff - (actualDiff);
            sum1 = tmpTotal + diffWithLow;
            sum2 = tmpTotal + diffWithHigh;
            ans = max(ans, max(sum1, sum2));
        }
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