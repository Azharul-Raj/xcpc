/**
 *    author:  raj_001
 *    created: 2024-05-26 18:43:49
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
    int n;cin>>n;
    string s,r;cin>>s;
    r=s;
    reverse(r.begin(),r.end());
    map<char,vector<int>> sPos,rPos;
    for(int i=0;i<s.size();i++){
        sPos[s[i]].push_back(i);
        rPos[r[i]].push_back(i);
    }
    
    vector<int> permutation(n);
    for(char i='a';i<='z';i++){
        for(int j=0;j<rPos[i].size();j++){
            
            permutation[rPos[i][j]]=sPos[i][j];
        }
    }
    
    pbds<int> st;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=st.order_of_key(permutation[i]);
        st.insert(permutation[i]);
    }
    cout<<ans;
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