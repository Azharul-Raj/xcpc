/**
 *    author:  raj_001
 *    created: 2024-05-15 15:45:01
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    int v2=n;
    int p=-1;
    while(v2>0){
        int div=0;
        for(int i=2;i<=sqrt(v2);i++){
            if( v2%i==0){
                div++;v2--;break;
            }
        }
        if(div==0){
            p=v2;break;
        }
    }
    int rest=n-p;
    if(rest==0)cout<<1<<nl;
    else if(rest>2 && rest%2==0)cout<<3<<nl;
    else cout<<2<<nl;
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