/**
 *    author:  raj_001
 *    created: 2024-05-14 08:17:35
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

const int N=1e5+5;

void solve(){
    int n;cin>>n;
    
    vector<int> mp(N,0);
    int ans=1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;

    }
    //
    for(int i=2;i<N;i++){
        int cnt=0;
        for(int j=i;j<N;j+=i){
            cnt+=mp[j];
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<nl;
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