/**
 *    author:  raj_001
 *    created: 2024-04-21 09:23:08
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
      ll a,b,n,s;cin>>a>>b>>n>>s;
      ll requiredA=s/n,restFrac=s%n; 
      ll missingA=abs(requiredA-a);
      ll extraRequired=(missingA*n)+restFrac;
      if(a>=requiredA && b>=restFrac)cout<<"YES"<<nl;
      else if(b>=extraRequired)cout<<"YES"<<nl;
      else cout<<"NO"<<nl;
   }
   return 0;
}