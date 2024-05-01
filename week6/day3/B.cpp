/**
 *    author:  raj_001
 *    created: 2024-05-01 08:13:37
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    auto ok=[&](ll m){
        ll totalWater=0;
        for(int i=0;i<n;i++){
            if(m>a[i]){
                totalWater+=(m-a[i]);
            }
        }
        return k>=totalWater;
    };

    ll l=0,r=2e9+5,mid,ans;
    while(r>=l){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
            // r=mid-1;
        }else r=mid-1;
    }
    cout<<ans<<nl;
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