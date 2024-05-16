/**
 *    author:  raj_001
 *    created: 2024-05-16 08:30:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

void solve(){
    int n;cin>>n;
    ll LCM=1;
    bool ok=1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
       if (LCM < 2e9){

            LCM=lcm(LCM,i+2);
       }
		if (x%LCM == 0)
				ok = false;
    }
    cout<<(ok?"YES":"NO")<<nl;;
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