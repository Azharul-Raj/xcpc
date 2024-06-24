/**
 *    author:  raj_001
 *    created: 2024-06-24 22:55:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   int l = a.back();
   a.pop_back();
   cout << *max_element(a.begin(), a.end()) + l << nl;
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