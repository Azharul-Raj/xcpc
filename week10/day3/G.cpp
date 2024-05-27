/**
 *    author:  raj_001
 *    created: 2024-05-27 11:35:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    string s,t;cin>>s>>t;
    bool y=0;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='0'&&t[i-1]=='0' && s[i]=='1' && t[i]=='1'){
            y=1;break;
        }
    }
    cout<<(y?"YES":"NO")<<nl;
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