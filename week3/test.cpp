/**
 *    author:  raj_001
 *    created: 2024-04-06 11:19:41
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      ll n,k,x;cin>>n>>k>>x;
      if(k>30)cout<<"No"<<nl;
      else{
         ll minPv=pow(2,k-1);
      if(x>=minPv)cout<<"Yes"<<nl;
      else cout<<"No"<<nl;
      }
      
   }
   return 0;
}