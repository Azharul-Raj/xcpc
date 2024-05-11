/**
 *    author:  raj_001
 *    created: 2024-05-11 22:20:43
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    string s;cin>>s;
    int zero=count(s.begin(),s.end(),'0');
    int one=count(s.begin(),s.end(),'1');
    
    for(int i=0;i<s.size();i++){
      if(s[i]=='0' && one)one--;
      else if(s[i]=='1' && zero) zero--;
      else break;
    }
    cout<<one+zero<<nl;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}