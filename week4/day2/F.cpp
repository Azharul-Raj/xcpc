/**
 *    author:  raj_001
 *    created: 2024-04-16 17:24:22
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
      map<int,int> cnt;
      for(int i=0;i<n;i++){
        int x;cin>>x;
        cnt[__lg(x)]++;
      }
      ll ans=0;
      for(auto [x,y]:cnt){
         cout<<"x "<<x<<" y "<<y<<nl;
         ans+=y*(y-1)/2;
      }
      cout<<ans<<nl;
   }
   return 0;
}