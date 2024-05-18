/**
 *    author:  raj_001
 *    created: 2024-05-18 18:03:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    ll remaining=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll mx=*max_element(a.begin(),a.end());
    int gcd=0;
    for(int i=0;i<n;i++){
        gcd=__gcd<int64_t>(gcd,mx-a[i]);
        remaining+=(mx-a[i]);
    }
    cout<<remaining/gcd<<" "<<gcd<<nl;
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