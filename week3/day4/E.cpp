/**
 *    author:  raj_001
 *    created: 2024-04-03 12:15:47
 **/
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      vector<vector<int>> total(n,vector<int>(n-1));

      int val=INT_MAX;
      
       int freq[n+1]={0};
       for(int i=0;i<n;i++){
         for(int j=0;j<n-1;j++){
            cin>>total[i][j];
            if(j==n-2){
               freq[total[i][j]]++;               
            }
         }
       }
       for(int i=0;i<n;i++){
         for(int j=0;j<n-1;j++){
            if(freq[total[i][j]]==1){
                  val=total[i][j];
               }
         }
       }
      //  cout<<val<<nl;
       int row;
      for(int i=0;i<n;i++){
         for(int j=n-2;j<n-1;j++){
            if(total[i][j]==val) row=i;
         }
      }
      
      vector<int> ans;
      for(int i=row;i<=row;i++){
         for(int j=0;j<n-1;j++){
            ans.push_back(total[i][j]);
         }
      }
      for(int i=1;i<=n;i++){
         if(freq[i]==n-1)ans.push_back(i);
      }
      for(int val:ans)cout<<val<<" ";
      cout<<nl;
   }
   return 0;
}