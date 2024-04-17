/**
 *    author:  raj_001
 *    created: 2024-04-17 22:55:25
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
      int a,b;cin>>a>>b;
      cout<<(a^b)<<nl;
   }
   return 0;
}