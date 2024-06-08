/**
 *    author:  raj_001
 *    created: 2024-06-08 07:44:37
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        cin >> b[i];
    int last = b[n];
    int appended = last;
    int diff = INT_MAX;
    ll operation = 1;
    bool inBetween = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= last && b[i] <= last) || (b[i] >= last && a[i] <= last))
        {
            inBetween = 1;
        }
        operation += abs(a[i] - b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i] - last) < diff)
        {
            diff = abs(a[i] - last);
            appended = a[i];
        }

        if (abs(b[i] - last) < diff)
        {
            diff = abs(b[i] - last);
            appended = b[i];
        }
    }

    // cout << appended << nl;
    if (!inBetween)
    {
        operation += abs(appended - last);
    }
    cout << operation << nl;
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