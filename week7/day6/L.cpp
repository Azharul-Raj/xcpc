/**
 *    author:  raj_001
 *    created: 2024-05-09 19:31:21
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> l,r;
    while(n--){
        int x;cin>>x;
        if(r.empty() &&(l.empty() || x>=l.back())){
            l.push_back(x);cout<<"1";
        }else if(x<=l[0] && (r.empty()|| x>=r.back())){
            r.push_back(x);cout<<"1";
        }else cout<<"0";
    }
    cout<<nl;
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