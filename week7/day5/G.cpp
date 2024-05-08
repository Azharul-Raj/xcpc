/**
 *    author:  raj_001
 *    created: 2024-05-08 08:13:23
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> p,neg;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>0)p.push_back(x);
        else neg.push_back(-x);
        
    }
    sort(p.begin(),p.end(),greater<int>());
    sort(neg.begin(),neg.end(),greater<int>());
    ll sum=0;
    for(int i=0;i<p.size();i+=k){
        sum+=p[i];
    }
    for(int i=0;i<neg.size();i+=k){
        sum+=neg[i];
    }
    if(p.size()==0)p.push_back(0);
    if(neg.size()==0)neg.push_back(0);
       int last=max(p[0],neg[0]);
    cout<<2*sum-last<<nl;
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