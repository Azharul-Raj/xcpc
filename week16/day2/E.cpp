/**
 *    author:  raj_001
 *    created: 2024-07-14 11:16:54
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    vector<int> cnt(101, 0);
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    int x = 0, y = 0;
    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] > 0)
        {
            cnt[i]--;
        }
        else
        {
            x = i;
            break;
        }
    }
    //
    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] > 0)
        {
            cnt[i]--;
        }
        else
        {
            y = i;
            break;
        }
    }
    cout << x + y << nl;
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