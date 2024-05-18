/**
 *    author:  raj_001
 *    created: 2024-05-17 08:08:29
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

void solve(){
    ll n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ans+=((n/a)*p);
    ans+=((n/b)*q);
    ll common=n/lcm(a,b);
    ans-=(common*(p+q));
    ans+=(common*max(p,q));
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