/**
 *    author:  raj_001
 *    created: 2024-04-23 17:26:27
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
      int negCount=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            negCount++;
            a[i]=-a[i];
        }
        sum+=a[i];
      }
      sort(a.begin(),a.end());
      if(negCount & 1)sum-=2*a[0];
      cout<<sum<<nl;
   }
   return 0;
}