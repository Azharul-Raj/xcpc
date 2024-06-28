/**
 *    author:  raj_001
 *    created: 2024-06-21 06:33:53
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   int n, m, k;
   cin >> n >> m >> k;
   vector<pair<pair<int, int>, int>> vp; //(1e5+1);
   vector<int> a(n + 1), ans(n + 2);
   map<int, int> ite;
   for (int i = 1; i <= n; i++)
      cin >> a[i];
   for (int i = 0; i < m; i++)
   {
      int l, r, c;
      cin >> l >> r >> c;

      vp.push_back({{l, r}, c});
   }
   for (int i = 0; i < k; i++)
   {
      int x, y;
      cin >> x >> y;
      auto p = vp[x];
      auto idxs = p.first;
      ans[idxs.first] += p.second;
      ans[idxs.second + 1] -= p.second;
      // ite.push_back({l-1,r-1},)
      // for (int j = x - 1; j < y; j++)
      // {
      //    auto p = vp[j];
      //    auto idxs = p.first;
      //    ans[idxs.first] += p.second;
      //    ans[idxs.second + 1] -= p.second;
      // }
   }
   for (int i = 1; i <= n + 1; i++)
   {
      ans[i] = ans[i - 1] + ans[i];
   }
   for (int i = 1; i <= n; i++)
   {
      ans[i] += a[i];
   }
   //
   for (int i = 1; i <= n; i++)
      cout << ans[i] << " ";
}

int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t = 1;
   // cin>>t;
   while (t--)
   {
      solve();
   }
   return 0;
}