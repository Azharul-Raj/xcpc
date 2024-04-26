/**
 *    author:  raj_001
 *    created: 2024-04-25 18:15:02
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
//    cin>>t;
   while(t--){
      int n,k;cin>>n>>k;
      vector<int> a(n);
      for(int i=0;i<n;i++)cin>>a[i];
      while(k--){
        int key;cin>>key;
        int l=0,r=n-1;
        int mid=(l+r)/2;
        bool found=false;
        while(l<=r){
            
            if(a[mid]==key){
                found=true;break;
            }

            if(a[mid]>key){
                r=mid-1;
            }else l=mid+1;

            mid=(l+r)/2;
        }
        cout<<(found?"YES":"NO")<<nl;
      }
   }
   return 0;
}