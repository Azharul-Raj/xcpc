/**
 *    author:  raj_001
 *    created: 2024-04-20 20:16:31
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
      for(int i=0;i<n;i++)cin>>a[i];
      sort(a.begin(),a.end(),greater<int>());
      for(int i=0;i<n;i++)cout<<a[i]<<" ";
      cout<<nl;
   }
   return 0;
}