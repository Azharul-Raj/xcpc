/**
 *    author:  raj_001
 *    created: 2024-05-12 18:33:17
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> divisor;
    for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
         divisor.push_back(i);
         if(n/i!=i)divisor.push_back(n/i);
      }
    }
    sort(divisor.begin(),divisor.end());
    if(k>divisor.size())cout<<-1<<nl;
    else cout<<divisor[k-1]<<nl; 
    divisor.clear();

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