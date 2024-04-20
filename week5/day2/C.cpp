/**
 *    author:  raj_001
 *    created: 2024-04-20 06:01:07
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
      int a,b,c;cin>>a>>b>>c;
      int firstCoast=a-1;
      int secondCoast=abs(b-c)+c-1;
      if(firstCoast==secondCoast)cout<<3<<nl;
      else if(firstCoast>secondCoast)cout<<2<<nl;
      else cout<<1<<nl;
   }
   return 0;
}