/**
 *    author:  raj_001
 *    created: 2024-04-20 19:50:20
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   // cin>>t;
   while(t--){
      int n;cin>>n;
      vector<int> a(n);
      for(int i=0;i<n;i++)cin>>a[i];
      int m;cin>>m;
      vector<int> b(m);
      for(int i=0;i<m;i++)cin>>b[i];
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      int l=0,r=0,cnt=0;
      while(l<n){
         if(a[l]==b[r] || (abs(a[l]-b[r]))<=1){
            cnt++;l++;r++;
         }else if(a[l]<b[r])l++;
         else if(b[r]<a[l])r++;
         if(l==n || r==m)break;
      }
      cout<<cnt;
   }
   return 0;
}