/**
 *    author:  raj_001
 *    created: 2024-05-20 11:17:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


void solve(){
    ll a,b;cin>>a>>b;
    vector<ll> div;
    map<ll,ll> mp;
    for(int i=2;i*i<=b;i++){
      if(b%i==0){
         while(b%i==0){
            mp[i]++;b/=i;
         }
      }
    }
    if(b>1)mp[b]++;
    for(auto [x,y]:mp){
      if(y>0)div.push_back(x);
    }
    bool y=1;
   //  for(int i:div)cout<<i<<" ";
    for(int i=0;i<div.size();i++){
      if(a%div[i]!=0){
         y=0;
      }
    } 
    if(b==1)cout<<"NO"<<nl;
    else {

    cout<<(y?"YES":"NO")<<nl;
    }
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