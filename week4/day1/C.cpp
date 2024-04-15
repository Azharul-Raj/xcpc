/**
 *    author:  raj_001
 *    created: 2024-04-10 10:36:50
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n,k;cin>>n>>k;
   int cnt=0;
   vector<int> a(n);
   for(int i=0;i<n;i++)cin>>a[i];

   for(int i=0;i<=n-k;i++){
      for(int j=i;j<i+k;j++){
         if(a[j]%2==1){
            cnt++;break;
         }
      }
   }
   cout<<cnt<<nl;
   }
   return 0;
}