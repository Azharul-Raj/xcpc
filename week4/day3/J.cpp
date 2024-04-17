/**
 *    author:  raj_001
 *    created: 2024-04-17 19:17:06
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      int x;cin>>x;
      int a=0,b=0;
      for(int i=0;i<30;i++){
        if(x&(1<<i))a+=b,b=(1<<i);
      }
      int ans=1;
      for(int i=0;i<30;i++){
        if((1<<i)<=a && (x&(1<<i))==0){
            ans*=2;
        }
      }
      cout<<ans<<nl;
   }
   return 0;
}