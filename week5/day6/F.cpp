/**
 *    author:  raj_001
 *    created: 2024-04-25 21:38:51
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
      vector<int> bits(30,0);
      for(int i=0;i<30;i++){
        for(int j=0;j<n;j++){
            if((a[j] & (1<<i))!=0)bits[i]++;
        }
      }
    //   for(int v:bits)cout<<v<<" ";
    for(int k=1;k<=n;k++){
        bool ok=true;
        for(int i=0;i<30;i++){
            if(bits[i]%k!=0){
                ok=false;break;
            }
            
        }
        if(ok)cout<<k<<" ";
    }
    cout<<nl;
   }
   return 0;
}