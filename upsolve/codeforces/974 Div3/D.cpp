/**
 *    author:  raj_001
 *    created: 2024-09-24 23:14:22
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

void solve()
{
    int n, d, k;
    cin >> n >> d >> k;
    vector<int> L(n + 1), R(n + 1);
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        L[l]++;
        R[r]++;
    }
    //
    for (int i = 0; i < n; i++)
    {
        L[i + 1] += L[i];
        R[i + 1] += R[i];
    }
    //
    int mx = -1, robert = -1, mom = -1, mn = INT_MAX;
    for (int i = d; i <= n; i++)
    {
        int v = L[i] - R[i - d];
        if (v > mx)
            mx = v, robert = i - d + 1;
        if (mn > v)
            mn = v, mom = i - d + 1;
    }
    cout << robert << " " << mom << nl;
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