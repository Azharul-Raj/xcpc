/**
 *    author:  raj_001
 *    created: 2024-04-22 11:51:48
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
    ll a,b,n;cin>>a>>b>>n;
    ll ans=b;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        ans+=min(a-1,x);
    }
    cout<<ans<<nl;
   }
   return 0;
}