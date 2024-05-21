/**
 *    author:  raj_001
 *    created: 2024-05-19 19:47:09
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
bool isPrime(int x){
   if(x<=1)return 0;
   for(int i=2;i<=sqrt(x);i++){
      if(x%i==0)return 0;
   }
   return 1;
}

int nextPrime(int x){
   while(!isPrime(x)){
      x++;
   }
   return x;
}

void solve(){
    int n;cin>>n;
    ll f=nextPrime(n+1);
    ll s=nextPrime(f+n);
    ll ans;
    ll sq=f*s;
   cout<<sq<<nl;
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