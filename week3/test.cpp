/**
 *    author:  raj_001
 *    created: 2024-03-30 12:17:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   vector<int> v(n),prefx(n+1),sufx(n+1);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   //
   prefx[0]=v[0];
   sufx[n-1]=v[n-1];
   for(int i=1;i<n;i++){
      prefx[i]=prefx[i-1]+v[i];
   }
   for(int i=n-2;i>=0;i--){
      sufx[i]=sufx[i+1]+v[i];
   }
   for(int i=0;i<n;i++)cout<<prefx[i]<<" ";
   cout<<nl;
   for(int i=n-1;i>=0;i--)cout<<sufx[i]<<" ";
   return 0;
}