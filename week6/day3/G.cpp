/**
 *    author:  raj_001
 *    created: 2024-04-30 19:21:55
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
const int mxN=1e6+2;

void solve(){
    int n,k;cin>>n>>k;
    cout<<(k+((k-1)/(n-1)))<<nl;
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