/**
 *    author:  raj_001
 *    created: 2024-04-18 10:24:45
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
      int n,k;cin>>n>>k;
      int ans=-1;
      for(int i=0;i<n;i++){
        int x;cin>>x;
        if((x&k)==k){
            ans&=x;
        }
      }
      if(ans==k)cout<<"Yes"<<nl;
      else cout<<"No"<<nl;
   }
   return 0;
}