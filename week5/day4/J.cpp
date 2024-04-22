/**
 *    author:  raj_001
 *    created: 2024-04-22 10:18:21
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
      ll a,b,n;cin>>a>>b>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];
      ll i=1,s=0;
      ll c=min(arr[0]+b,a);
      while(true){
        if((c-1)==0 && i!=n){
            c=min(arr[i]+c,a);i++;
        }
        s++;c--;
        if(c==0)break;
        // if(c-1==0){
        //     s++;break;
        // }
        // s=s+(c-1);
        // c=c-(c-1);
      }
      cout<<s<<nl;
   }
   return 0;
}