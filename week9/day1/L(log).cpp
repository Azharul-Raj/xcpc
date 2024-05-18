/**
 *    author:  raj_001
 *    created: 2024-05-18 15:57:00
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define ld long double
using namespace std;


ll x,y;
ld a,b;
void solve(){
    
    cin>>x>>y;
    a=y*log(x);
    b=x*log(y);
    if(a>b)cout<<">"<<nl;
    else if(a<b)cout<<"<"<<nl;
    else cout<<"="<<nl;
   
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