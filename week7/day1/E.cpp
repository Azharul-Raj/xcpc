/**
 *    author:  raj_001
 *    created: 2024-05-04 23:12:45
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());

    //lamda func
    auto ok=[&](int m){
        int l=0,cnt=1;
        for(int r=0;r<n;r++){
            if((a[r]-a[l])>(2*m)){
                l=r;cnt++;
            }
        }
        return cnt<=3;
    };

    int l=0,r=1e9,mid,ans=0;
    while(r>=l){
        mid=l+(r-l)/2;
        if(ok(mid)){
            r=mid-1;
            ans=mid;
        }else {
            l=mid+1;
        }
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