/**
 *    author:  raj_001
 *    created: 2024-06-11 18:15:00
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<int> l(n, 0), r(n, 0);
    //
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] <= b[i])
        {
            l[i] = l[i - 1] + 1;
        }
    }
    //
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] - a[i] <= b[i])
        {
            r[i] = r[i + 1] + 1;
        }
    }
    //
    bool y = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            int capacity = r[i] + 1;
            if (capacity == n || (capacity + 1 + r[i + capacity] == n))
            {
                y = 1;
                break;
            }
        }
        else if (i == n - 1)
        {
            int capacity = l[i] + 1;
            if (capacity == n || (capacity + 1 + l[i - 1 - l[i]] == n))
            {
                y = 1;
                break;
            }
        }
        else if (2 + l[i] + r[i + 1] == n)
        {
            y = 1;
            break;
        }
    }
    //
    if (2 + r[0] + l[n - 1] >= n)
        y = 1;

    if (2 + r[1] == n)
        y = 1;
    cout << (y ? "YES" : "NO") << nl;
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