/**
 *    author:  raj_001
 *    created: 2024-06-26 22:26:27
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   int n;
   cin >> n;
   if (n == 1)
   {
      cout << 1 << nl;
      return;
   }
   vector<int> a;
   for (int i = 1; i <= n; i++)
   {
      a.push_back(i);
   }
   int l = 0;
   int r = n - 1;
   while (r >= l)
   {
      if (a[l] != a[r])
      {
         cout << a[r] << " " << a[l] << " ";
      }
      else
         cout << a[l] << " ";
      r--;
      l++;
   }
   cout << nl;
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