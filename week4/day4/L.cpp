/**
 *    author:  raj_001
 *    created: 2024-04-18 19:23:30
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
      vector<ll> a(n);
      vector<ll> box;
      int val=0;
      int l=0;
      for(int i=0;i<n;i++)cin>>a[i];
      sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                box.push_back(a[i]);a.pop_back();
            }else if(box[l]>=a[i]){
                box[l]=(a[i]^box[l]);a.pop_back();
            }else{
                l++;
                box.push_back(a[i]);
            }
        }
        cout<<box.size()<<nl;
   }
   return 0;
}