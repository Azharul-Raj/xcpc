/**
 *    author:  raj_001
 *    created: 2024-06-26 08:45:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;

void solve()
{
   string s;
   cin >> s;
   int n = s.size() + 2;
   vector<char> v(n);
   int l = count(s.begin(), s.end(), 'L');
   int r = count(s.begin(), s.end(), 'R');
   if (l == s.size())
   {
      cout << l + 1 << nl;
      return;
   }
   else if (r == s.size())
   {
      cout << 1 << nl;
      return;
   }
   //
   // s.push_back('0');
   int cnt = 1, ans = 0;
   for (char c : s)
   {
      if (c != 'R')
      {
         cnt++;
      }
      else
      {

         ans = max(ans, cnt);
         cnt = 1;
      }
   }

   ans = max(ans, cnt);
   cout << ans << nl;
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