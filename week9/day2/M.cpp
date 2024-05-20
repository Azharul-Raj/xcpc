/**
 *    author:  raj_001
 *    created: 2024-05-19 08:11:32
 * 
 * practice:https://codeforces.com/contest/1933/submission/252912149
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int a,b,l;cin>>a>>b>>l;
    set<int> st;

    for(ll i=1;l%i==0;i*=a){
      for(ll j=1;l%(i*j)==0;j*=b){
         st.insert(l/i/j);
      }
    }
    cout<<st.size()<<nl;
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
