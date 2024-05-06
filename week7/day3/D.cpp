/**
 *    author:  raj_001
 *    created: 2024-05-06 21:59:43
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    set<int> st;
    vector<int> bigger;
    for(int i=1;i<=n;i++)st.insert(i);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x<=n)st.erase(x);
        else bigger.push_back(x);
    }
    //
    sort(bigger.begin(),bigger.end(),greater<int>());
    bool isPossible=1;
    for(int v:bigger){
        auto it=st.end();
        it--;
        int val=(*it);
        if(val>(v-1)/2){isPossible=0;break;}
        else st.erase(it);

    }
    if(isPossible)cout<<bigger.size()<<nl;
    else cout<<"-1"<<nl;
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