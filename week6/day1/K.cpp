/**
 *    author:  raj_001
 *    created: 2024-04-27 19:50:18
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


void solve(){
   int n,tt; cin>>n>>tt;
    vector<int> a(n);
    auto ok=[&](ll m){
    ll total=0;
    for(int i=0;i<n;i++){
        total+=(m/a[i]);
        if(total>=tt){
            return true;
        }
    }
    return false;
};
    
    for(int i=0;i<n;i++)cin>>a[i];
    ll l=0,r=1,mid,ans;
    mid=l+(r-l)/2;
    while(!ok(mid)){
        r*=2;
        mid=l+(r-l)/2;
    }
    // cout<<"r -> "<<r<<nl;
    while(r>=l){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<nl;
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