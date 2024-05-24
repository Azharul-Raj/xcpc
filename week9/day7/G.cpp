/**
 *    author:  raj_001
 *    created: 2024-05-24 10:15:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    ll a,b;cin>>a>>b;
    ll total=a+b;
    if(total %3 ==0 && a<=2*b && b<=2*a)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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