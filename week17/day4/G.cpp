/**
 *    author:  raj_001
 *    created: 2024-08-19 14:51:40
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int &v : a)
    {
        cin >> v;
    }
    if (n % 2)
    {
        no;
    }
    else
    {
        vector<int> ans(n);
        sort(all(a));
        int idx1 = 0, idx2 = 1, j = n / 2;
        for (int i = 0; i < n / 2; i++, j++)
        {
            ans[idx1] = a[i];
            ans[idx2] = a[j];
            idx1 += 2;
            idx2 += 2;
        }
        //
        bool y = 1;
        for (int i = 1; i < n - 1; i++)
        {
            if ((ans[i - 1] > ans[i] && ans[i] < ans[i + 1]) || (ans[i - 1] < ans[i] && ans[i] > ans[i + 1]))
            {
            }
            else
            {
                no;
                return;
            }
        }
        ys;
        for (int v : ans)
            cout << v << " ";
        cout << nl;
    }
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