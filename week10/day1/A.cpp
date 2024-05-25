/**
 *    author:  raj_001
 *    created: 2024-05-25 23:19:32
 **/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;


template <typename T> using ppds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;


void solve(){
    int n,m;cin>>n>>m;ppds<int> a,b;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.insert(x);
    }
    for(int i=0;i<m;i++){
        int key;cin>>key;
        int val=a.order_of_key(key+1);
        cout<<val<<" ";
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