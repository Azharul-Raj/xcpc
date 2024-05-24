/**
 *    author:  raj_001
 *    created: 2024-05-24 19:16:30
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    multiset<int> st;
    vector<int> v(m);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    for(int i=0;i<m;i++){
        int target;cin>>target;
        auto v=st.upper_bound(target);
        if(v==st.begin())cout<<-1<<nl;
        else{
            --v;cout<<*v<<nl;
            st.erase(st.find(*v));
        }

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