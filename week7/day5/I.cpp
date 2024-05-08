/**
 *    author:  raj_001
 *    created: 2024-05-08 14:29:46
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

string s="";

void solve(){
    int N=2e5+5;
    while(N--){
        if(N%2==0){
            s+="aa";
        }else s+="bb";
    }
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
//    cin>>t;
   while(t--){
      solve();
      int n;cin>>n;
      cout<<s.substr(0,n)<<nl;
   }
   return 0;
}