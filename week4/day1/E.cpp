/**
 *    author:  raj_001
 *    created: 2024-04-13 09:20:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    int msb=0;
    for(int i=0;i<30;i++){
        if((n>>i)==1){
            msb=i;
        }
    }
    int ans=(1<<msb)-1;
    cout<<ans<<nl;
   }
   return 0;
}