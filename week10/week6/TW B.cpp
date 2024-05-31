/**
 *    author:  raj_001
 *    created: 2024-05-31 16:49:24
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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //
    int l=0,r=0;
    pbds<pair<int,int>> st;
    while(r<n){
        st.insert({a[r],r});
        if((r-l+1)==k){
            int p=k/2;
            if(k%2==0)p--;
            auto it=st.find_by_order(p);
            cout<<it->first<<" ";
            st.erase({a[l],l});
            l++;
        }
        r++;
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