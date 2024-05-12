/**
 *    author:  raj_001
 *    created: 2024-05-12 14:28:00
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    ll l,r;cin>>l>>r;
    cout<<"YES"<<nl;
    while(l<r){
        cout<<l<< " "<<l+1<<nl;
        l+=2;
    }
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
//    cin>>t;
   while(t--){
      solve();
   }
   return 0;
}