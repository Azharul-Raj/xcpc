/**
 *    author:  raj_001
 *    created: 2024-05-29 07:32:58
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<pair<int,int>,int> fp,sp,tp;
    map<pair<int,pair<int,int>>,int> mp;
   ll ans=0;

    for(int i=0;i<n-2;i++){
      int val=mp[{a[i],{a[i+1],a[i+2]}}];
      // cout<<" i "<<i<<" "<<val<<nl;
      ans+=fp[{a[i],a[i+1]}]-val;
      ans+=sp[{a[i+1],a[i+2]}]-val;
      ans+=tp[{a[i],a[i+2]}]-val;

      fp[{a[i],a[i+1]}]++;
      sp[{a[i+1],a[i+2]}]++;
      tp[{a[i],a[i+2]}]++;

      mp[{a[i],{a[i+1],a[i+2]}}]++;

    }
    cout<<ans<<nl;
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