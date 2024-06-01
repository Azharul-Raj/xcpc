/**
 *    author:  raj_001
 *    created: 2024-06-01 21:43:56
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    ll ans = 0;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(vp.begin(), vp.end());
    pbds<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += st.order_of_key(vp[i].second);
        st.insert(vp[i].second);
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