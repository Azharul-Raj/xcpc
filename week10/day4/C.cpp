/**
 *    author:  raj_001
 *    created: 2024-05-28 19:39:03
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int a,b,k;cin>>a>>b>>k;
    
    ll cnt=0;
   while(b>0){
    // if(b==0)break;
    if(b%k==0 && (b/k)>=a){
    b/=k;cnt++;
    
   }else{
    if((b/k)<a){
        cnt+=(b-a);
        b-=(b-a);
    }else{
        cnt+=b%k;b-=b%k;
    }
    if(b<=a)break;
   }
   }
    cout<<cnt<<nl;
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