/**
 *    author:  raj_001
 *    created: 2024-04-21 20:16:05
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
      ll i,n,j,k,cnt=0;
        cin>>n;
        k=(n*(n-1))/2;
        vector<int> a(k);
        for(i=0;i<k;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(i=0;i<k;i+=n){
            cout<<a[i]<<" ";
            n--;
        }cout<<a[k-1]<<"\n";
   }
   return 0;
}