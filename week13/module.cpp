/**
 *    author:  raj_001
 *    created: 2024-06-02 15:16:09
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
   int n, m, k;
   cin >> n >> m >> k;
   vector<int> a(n), d(n + 2);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   vector<int> vM[m];
   int ii = 0;
   int itM = m;
   while (itM--)
   {
      int l, r, d;
      cin >> l >> r >> d;
      vM[ii].push_back(l);
      vM[ii].push_back(r);
      vM[ii].push_back(d);
      ii++;
   }

   while (k--)
   {
      int s, e;
      cin >> s >> e;
      for (int i = s; i <= e; i++)
      {
      }
   }

   // cout << ans << nl;
}

int main()
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