/**
 *    author:  raj_001
 *    created: 2024-06-03 15:42:52
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
    sort(a.begin(), a.end());
    int first = a[0];
    if (first == 1)
        cout << "Yes" << nl;
    else
    {
        int second;
        int k = 1;
        while (k < n)
        {
            if (a[k] % first != 0)
            {
                second = a[k];
                break;
            }
            k++;
        }
        bool y = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % first == 0 || a[i] % second == 0)
            {
                y = 1;
            }
            else
            {
                y = 0;
                break;
            }
        }
        cout << (y ? "Yes" : "No") << nl;
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