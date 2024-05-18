/**
 *    author:  raj_001
 *    created: 2024-05-18 14:41:03
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int x,y;cin>>x>>y;
    if(x==y || (min(x,y)==2 && max(x,y)==4))cout<<"=";
    else if(!(x==3 && y==2) && (y!=1 && x>y) || (x==2 && y==3) || x==1) cout<<"<";
    else cout<<">";
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