/**
 *    author:  raj_001
 *    created: 2024-04-20 06:35:30
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   while(t--){
      int n,l,r,x;cin>>n>>l>>r>>x;
      vector<vector<int>> subsets;
      vector<int> a(n);
      for(int i=0;i<n;i++)cin>>a[i];
      for(int i=0;i<(1<<n);i++){
            vector<int> v;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                v.push_back(a[j]);
            }
        }
        subsets.push_back(v);
      }
      int ans=0;
      for(auto set:subsets){
        int total=0;
        int mn=INT_MAX;int mx=INT_MIN;
        for(int val:set){
            total+=val;
            mn=min(mn,val);
            mx=max(mx,val);
        }
        int diff=mx-mn;
        if(total>=l && total<=r && diff>=x){
            ans++;
        }
      }
      cout<<ans;
   }
   return 0;
}