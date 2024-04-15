/**
 *    author:  raj_001
 *    created: 2024-04-15 06:36:09
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      int n;cin>>n;
      vector<int> a(n);
      int ans=0;
      for(int i=0;i<n;i++)cin>>a[i],ans|=a[i];
      cout<<ans<<nl;
   }
   return 0;
}