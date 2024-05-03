/**
 *    author:  raj_001
 *    created: 2024-05-03 22:33:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,a,b;cin>>n>>a>>b;
    int l=1,r=min(a,b);
    while(r>=l){
        int m=(l+r)/2;
        if((a/m+b/m)<n){
            r=m-1;
        }else l=m+1;
    }
    cout<<r<<nl;
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