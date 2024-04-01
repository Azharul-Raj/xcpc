#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n,q;cin>>n>>q;
      vector<long long int> arr(n),prefix(n),suffix(n);
      for(int i=0;i<n;i++)cin>>arr[i]; 
      prefix[0]=arr[0]; 
      suffix[n-1]=arr[n-1];
      for(int i=1;i<n;i++){ 
         prefix[i]=prefix[i-1]+arr[i];
      }
      for(int i=n-2;i>=0;i--){ 
         suffix[i]=suffix[i+1]+arr[i];
      }
    
      while(q--){
         long long int l,r,k;cin>>l>>r>>k;
        long long int sum=0;
         if(l>1){ 
            sum+=prefix[l-2];
         }
         sum+=((r+1)-l)*k;
         if(r<n){ 
            sum+=suffix[r];
         }
         if(sum%2==1)cout<<"YES"<<nl;
         else cout<<"NO"<<nl;
      }
   }
   return 0;
}
