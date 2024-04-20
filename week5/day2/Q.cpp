/**
 *    author:  raj_001
 *    created: 2024-04-20 16:26:46
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  //  cout<<"here";
  while (t--)
  {
    string s;
    cin >> s;
    int n = s.size();
    int cnt=0;
    vector<int> freq(26, 0);
    if (n % 2 == 0)
    {
      for (int i = 0; i < n; i++)
      {
        freq[s[i] - 'a']++;
      }
      bool even = true;
      for (int i = 0; i < 26; i++)
      {
        if (freq[i] > 0)
        {
          cnt++;
          if (freq[i] % 2 != 0)
            even = 0;
        }
      }
      if (cnt > 1 && even)
        cout << "YES" << nl;
      else
        cout << "NO" << nl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        freq[s[i] - 'a']++;
      }
      int oddCnt = 0;
      int oddElement=0;
      for (int i = 0; i < 26; i++)
      {
        if (freq[i] > 0)
        {
          cnt++;
          if (freq[i] % 2 == 1){
            oddCnt++;
            oddElement+=freq[i];
          }
        }
      }
      if(cnt==2 && oddElement==1)cout<<"NO"<<nl;
      else if(cnt>1 && oddCnt==1)cout<<"YES"<<nl;
      else cout<<"NO"<<nl;
    }
  }
  return 0;
}