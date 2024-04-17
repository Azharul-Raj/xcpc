/**
 *    author:  raj_001
 *    created: 2024-04-17 07:40:50
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
         if(x&(1<<i)){
            a+=b;
            b=(1<<i);
         }
      }
      cout<<a<<" "<<b<<nl;
   }
   return 0;
}