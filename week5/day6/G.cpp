/**
 *    author:  raj_001
 *    created: 2024-04-24 18:14:19
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
      int n,coin;cin>>n>>coin;
      vector<int> a(n);
      map<int,bool> mp;
      for(int i=0;i<n;i++){
        int x;cin>>x;
        int idx=i+1;
        a[i]=x+idx;
        mp[i]=true;
      }
      sort(a.begin(),a.end());
      int t=0;
      int l=0;
      
      while(l<n){
         if(coin==0)break;
         int diff=coin-a[l];
         if(diff>=0 && mp[l]){
            coin-=a[l];t++;
         }
         l++;
      }
      cout<<t<<nl;
   }
   return 0;
}