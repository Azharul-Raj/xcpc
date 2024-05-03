/**
 *    author:  raj_001
 *    created: 2024-05-03 08:36:32
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a;
   vector<ll> pref;
   pref.push_back(0);
   int mxVal=-1;
   for(int i=1;i<=n;i++){
    int x;cin>>x;
    mxVal=max(x,mxVal);
    a.push_back(mxVal);
    pref.push_back(pref.back()+x);
   }
   
    while(m--){
        int leg;cin>>leg;
        int idx=upper_bound(a.begin(),a.end(),leg)-a.begin();
        cout<<pref[idx]<<" ";
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