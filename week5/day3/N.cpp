/**
 *    author:  raj_001
 *    created: 2024-04-21 08:07:57
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
      bool exist=0;
      for(int i=2;i<n;i++){
        if(a[i-2]<a[i-1] && a[i-1]>a[i]){
            exist=1;
            cout<<"YES"<<nl;
            cout<<(i-2)+1<<" "<<(i-1)+1<<" "<<i+1<<nl;break;
        }
      }
      if(!exist)cout<<"NO"<<nl;
   }
   return 0;
}