/**
 *    author:  raj_001
 *    created: 2024-05-12 16:20:22
 **/
//https://codeforces.com/contest/230/status/B
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

bool isOk(int x){
    if(x<=1)return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return 0;
    }
    return 1;
}

void solve(){
    ll n;cin>>n;
    int v=sqrt(n);
    if((ll)v*v==n && isOk(v))cout<<"YES"<<nl;
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