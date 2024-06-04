/**
 *    author:  raj_001
 *    created: 2024-06-04 21:14:43
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
   string s;
   cin >> s;
   stack<char> st;
   int cnt = 0;
   for (int i = 0; i < s.size(); i++)
   {
      if (s[i] == 'B')
      {
         if (!st.empty())
            st.pop();
         else
            st.push(s[i]);
      }
      else
      {
         st.push(s[i]);
      }
   }
   cout << st.size() << nl;
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