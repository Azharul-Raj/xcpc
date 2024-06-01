/**
 *    author:  raj_001
 *    created: 2024-06-01 08:34:00
 **/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;


template <typename T> using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


void solve(){
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    //
    ll ans=0;
    pbds<pair<int,int>> st;
    for(int i=n-1;i>=0;i--){
        ans+=st.order_of_key({a[i],INT_MAX});
        st.insert({a[i],i});
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