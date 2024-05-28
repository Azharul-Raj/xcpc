/**
 *    author:  raj_001
 *    created: 2024-05-27 11:46:03
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;vector<int> a(n);
    ll sum=0,mnTotal=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];sum+=a[i];
        if(a[i]==1)mnTotal+=2;
        else{
            mnTotal+=1;
        }
    }
    // mnTotal=n*2-2;
    if(n>1 && sum>=mnTotal){
        cout<<"YES"<<nl;
    }else cout<<"NO"<<nl;   
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}