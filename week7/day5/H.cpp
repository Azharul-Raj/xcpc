/**
 *    author:  raj_001
 *    created: 2024-05-08 10:51:14
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
     vector<int> freq(n+1,0),cnt(n+1,0);
     
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(n>=a[i])freq[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            cnt[j]+=freq[i];
        }
    }
    cout<<*max_element(cnt.begin(),cnt.end())<<nl;
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