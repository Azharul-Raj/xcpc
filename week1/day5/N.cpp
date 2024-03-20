/**
 *    author:  raj_001
 *    created: 2024-03-20 13:18:16
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   bool freq[100001];
   memset(freq,0,sizeof(freq));
   for(int i=0;i<n-1;i++){
      int a;cin>>a;
      freq[a]=1;
   }
   int ans=0;
   for(int i=1;i<=n;i++){
      if(freq[i]==0){
         ans=i;
      }
   }
   cout<<ans;
   return 0;
}