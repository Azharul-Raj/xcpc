/**
 *    author:  raj_001
 *    created: 2024-05-12 14:21:51
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    int cnt=n/2;
    cout<<cnt<<nl;
    if(n%2==1){
        for(int i=0;i<cnt-1;i++){
            cout<<2<<" ";
        }
        cout<<3<<nl;
    }else {
        for(int i=0;i<cnt;i++)cout<<2<<" ";
    }
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
//    cin>>t;
   while(t--){
      solve();
   }
   return 0;
}