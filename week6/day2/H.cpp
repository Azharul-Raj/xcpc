/**
 *    author:  raj_001
 *    created: 2024-04-29 20:05:03
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
const int mxN=1e4;
vector<ll> pw;

void solve(){
    ll x;cin>>x;
    bool exist=false;
    for(int i=0;i<mxN;i++){
        if(pw[i]>x)break;
        ll rest=x-pow(i+1,3);
        ll l=0,r=mxN-1;
        while(r>=l){
            ll mid=l+(r-l)/2;
            if(rest==pw[mid]){
                exist=true;break;
            }

            if(rest>pw[mid]){
                l=mid+1;
            }else r=mid-1;
        }
    }
    if(exist)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   for(int i=1;i<mxN;i++){
    pw.push_back(pow(i,3));
   }
   
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}