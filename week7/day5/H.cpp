/**
 *    author:  raj_001
 *    created: 2024-05-08 10:51:14
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
    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(i>=a[j] && i%a[j]==0)cnt++;
        }
        ans=max(ans,cnt);
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