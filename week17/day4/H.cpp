/**
 *    author:  raj_001
 *    created: 2024-08-20 15:24:36
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

vector<int> a;
int ans = 0;

void func(int l1, int r1, int l2, int r2)
{
    int mxL = 0, mnR = INT_MAX;
    for (int i = l1; i <= r1; i++)
    {
        mxL = max(mxL, a[i]);
    }
    for (int i = l2; i <= r2; i++)
    {
        mnR = min(mxL, a[i]);
    }
    if (mxL > mnR)
    {
        // swap
        int R = l2;
        for (int i = l1; i <= r1; i++)
        {
            swap(a[i], a[R]);
            R++;
        }
        ans++;
    }
    if (l1 == r1 || l2 == r2)
        return;
    int mid1 = (l1 + r1) / 2;
    int mid2 = (l2 + r2) / 2;

    func(l1, mid1, mid1 + 1, r1);
    func(l2, mid2, mid2 + 1, r2);
}

void solve()
{
    int n;
    cin >> n;
    a.resize(n);
    for (int &v : a)
        cin >> v;
    //
    if (is_sorted(all(a)))
    {
        cout << 0 << nl;
        return;
    }
    ans = 0;
    int m = n / 2;
    func(0, m - 1, m, n - 1);
    if (is_sorted(all(a)))
    {
        cout << ans << nl;
    }
    else
        cout << -1 << nl;
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