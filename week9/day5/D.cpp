/**
 *    author:  raj_001
 *    created: 2024-05-22 14:53:38
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;vector<int> a(n);
    ll m=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            m+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    // for(int v:a)cout<<v<<" ";
    cout<<m<<nl;
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