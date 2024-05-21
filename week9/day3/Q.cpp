/**
 *    author:  raj_001
 *    created: 2024-05-20 11:30:18
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a,o,e;
    int gcdE=0,gcdO=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(i%2==0){
            gcdE=__gcd<int64_t>(gcdE,x);e.push_back(x);
        }else {
            gcdO=__gcd<int64_t>(gcdO,x);o.push_back(x);
        }
    }
    // for(int v:o)cout<<v<<" ";
    // cout<<nl;
    cout<<gcdE<<" "<<gcdO<<nl;
    bool y1=0,y2=0;
    if(gcdE>1){
        for(int i=0;i<o.size();i++){
            if((o[i]%gcdE)==0){
                y1=1;break;
            }
        }        
    }else if(gcdO>1){
        for(int i=0;i<e.size();i++){
            if((e[i]%gcdO)==0){
                y2=1;break;
            }
        }
    }

    if(y1==1 || y2==1){
        cout<<0<<nl;
    }else{
        if(gcdE>1)cout<<gcdE<<nl;
        else cout<<gcdO<<nl;
    }
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