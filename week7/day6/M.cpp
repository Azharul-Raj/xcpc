/**
 *    author:  raj_001
 *    created: 2024-05-09 22:06:45
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,q;cin>>n>>q;
    vector<ll> a(n);
    vector<bool> freq(31,0);
    vector<pair<int,int>> b;
    for(int i=0;i<n;i++)cin>>a[i];
    int k=0;
    for(int i=0;i<q;i++){
        int x;cin>>x;
        if(freq[x]==0){
         b.push_back({k,x});k++;
            freq[x]=1;
        }
    }
    for(int i=0;i<b.size();i++){
        auto p=b[i];
        int x=p.second;
        int div=(1<<x);
        x--;
        int addPw=(1<<x);
        for(int j=0;j<n;j++){
            if(a[j]%div==0){
                a[j]+=addPw;
            }
        }
    }
    for(int v:a)cout<<v<<" ";
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