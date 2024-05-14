/**
 *    author:  raj_001
 *    created: 2024-05-13 08:37:27
 * https://codeforces.com/problemset/problem/1285/C
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
ll lcm(int a,int b){
   return (a/__gcd(a,b))*b;
};

void solve(){
   ll n;cin>>n;
   ll ans;
   for(ll i=1;i*i<=n;i++){
      if(n%i==0 && lcm(i,n/i)==n){
         ans=i;
      }
   }
   cout<<ans<<" "<<n/ans<<nl;
   
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   // cin>>t;
   while(t--){
      solve();
   }
   return 0;
}