/**
 *    author:  raj_001
 *    created: 2024-08-19 10:21:16
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

struct node
{
    int mn, cnt;
};

node marge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.cnt = 0;
    if (l.mn == ans.mn)
    {
        ans.cnt += l.cnt;
    }
    if (r.mn == ans.mn)
    {
        ans.cnt += r.cnt;
    }
    return ans;
}
const int N = 1e5 + 5;
int a[N];
node t[4 * N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].cnt = 1;
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, m);
    build(r, m + 1, e);
    t[n] = marge(t[l], t[r]);
}
//
void update(int n, int b, int e, int p, int v)
{
    if (b > p || e < p)
        return;
    if (b == e)
    {
        t[n].mn = v;
        t[n].cnt = 1;
        return;
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, m, p, v);
    update(r, m + 1, e, p, v);
    t[n] = marge(t[l], t[r]);
}

//
node query(int n, int b, int e, int i, int j)
{
    if (e < i || b > j)
    {
        return {INT_MAX, 0};
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int m = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return marge(query(l, b, m, i, j), query(r, m + 1, e, i, j));
}
//

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    // cout << t[1].mn << " " << t[1].cnt << nl;
    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int i, v;
            cin >> i >> v;
            i++;
            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << " " << ans.cnt << nl;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}