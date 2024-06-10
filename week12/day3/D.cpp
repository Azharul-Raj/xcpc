/**
 *    author:  raj_001
 *    created: 2024-06-10 20:00:16
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
    int l = 0, r = n - 1;
    while (r >= l)
    {
        if (a[l] == b[l])
            l++;
        else if (a[r] == b[r])
            r--;
        else
            break;
    }
    while (l > 0 && b[l] >= b[l - 1])
        l--;
    while (r < n - 1 && b[r] <= b[r + 1])
        r++;
    cout << l + 1 << " " << r + 1 << nl;
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