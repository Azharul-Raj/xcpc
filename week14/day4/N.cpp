/**
 *    author:  raj_001
 *    created: 2024-07-02 15:47:58
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   int n, k;
   cin >> n >> k;
   vector<int> a(n), ans;
   queue<int> q;
   set<int> st;
   for (int i = 0; i < n; i++)
      cin >> a[i];
   unordered_map<int, bool> mp;
   int l = 0;
   while (l < n)
   {
      if (mp[a[l]] == 1)
      {
         l++;
      }
      else if (q.size() < k && mp[a[l]] == 0)
      {
         q.push(a[l]);
         mp[a[l]] = 1;
         // st.insert(a[l]);
         l++;
      }
      else
      {
         // mp[ans.front()] = 0;

         mp[q.front()] = 0;
         q.pop();
         q.push(a[l]);
         mp[a[l]] = 1;
         l++;
      }
   }
   cout << q.size() << nl;
   while (!q.empty())
   {
      ans.push_back(q.front());
      q.pop();
   }
   reverse(ans.begin(), ans.end());
   for (int v : ans)
      cout << v << " ";
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