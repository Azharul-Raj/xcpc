/**
 *    author:  raj_001
 *    created: 2024-04-21 18:06:16
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
      ll sum=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(sum+a[i]>=0){
            sum+=a[i];
        }else sum=0;
      }
      cout<<sum<<nl;
   }
   return 0;
}