/**
 *    author:  raj_001
 *    created: 2024-04-15 22:39:59
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m,k;
   cin>>n>>m>>k;
   int cnt=0;
   vector<int> a(m+1);
   for(int i=0;i<=m;i++)cin>>a[i];
   int i=0;
   // cout<<a[m]<<" n "<<m<<" k "<<k;
   vector<vector<int>> all;
   for(int i=0;i<=m;i++){
      vector<int> v;
      for(int j=0;j<n;j++){
         if((a[i]>>j) & 1){
            v.push_back(1);
         }else v.push_back(0);
      }
      all.push_back(v);
   }
   vector<int> fdr=all[m];
   for(int i=0;i<m;i++){
      int diff=0;
      for(int j=0;j<all[i].size();j++){
         if(all[i][j]!=fdr[j])diff++;
      }
      if(k>=diff)cnt++;
   }
   cout<<cnt;
   return 0;
}