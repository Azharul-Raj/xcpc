/**
 *    author:  raj_001
 *    created: 2024-03-30 09:10:20
 **/
#include <bits/stdc++.h>
#define nl '\n';
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      s.erase(unique(s.begin(), s.end()), s.end());
      if(s=="meow")cout<<"YES"<<nl
      else cout<<"NO"<<nl;
   }
   return 0;
}