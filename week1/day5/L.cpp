/**
 *    author:  raj_001
 *    created: 2024-03-20 09:42:22
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      int arr[n];
      int ans=0;
      for(int i=1;i<=n;i++){
         int val;cin>>val;
         ans=max(ans,val-i);
      }   
      cout<<ans<<'\n';
   }
   return 0;
}