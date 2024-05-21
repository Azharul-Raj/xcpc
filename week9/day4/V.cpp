/**
 *    author:  raj_001
 *    created: 2024-05-21 16:25:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    ll a,b;cin>>a>>b;
    ll z;
    if(b==1){
        cout<<"NO"<<nl;
    }else{

    z=a*b;
    ll y=z-a;
    ll x=a;
    while(x==y){
        z*=2;
        y=z-a;
    }
    if(y%(a*b)==0)cout<<"NO"<<nl;
    else {
    cout<<"YES"<<nl;
    cout<<x<<" "<<y<<" "<<z<<nl;
    }
    }

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