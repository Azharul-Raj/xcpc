/**
 *    author:  raj_001
 *    created: 2024-05-20 11:17:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


ll checkDivisor(ll a,ll b){
   if(b==1)return 1;
   ll g=__gcd<int64_t>(a,b);
   if(g==1)return 0;
   return checkDivisor(a,b/g);
}


void solve(){
    ll a,b;cin>>a>>b;
   ll ans=checkDivisor(a,b);
    cout<<(ans==1?"Yes":"No")<<nl;
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