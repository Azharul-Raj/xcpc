/**
 *    author:  raj_001
 *    created: 2024-04-27 19:50:18
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


void solve(){
   int n,k; cin>>n>>k;
    vector<int> a(n);
    //lamda functions 
    auto ok=[&](ll m){
    ll cnt=0;
    for(int i=(n/2);i<n;i++){
        cnt+=(a[i]<m ?(m-a[i]):0);        
    }
    return (k>=cnt);
};
    
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll l=1,r=2e9,mid,ans=0;
    while(r>=l){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
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