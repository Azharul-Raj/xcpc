/**
 *    author:  raj_001
 *    created: 2024-05-15 12:17:49
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> cnt;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                while(x%j==0){
                    cnt[j]++;
                    x/=j;
                }
            }
        }
        if(x>1)cnt[x]++;
    }
    //
    string ans="YES";
    for( auto [x,y]:cnt){
        if(y%n!=0)ans="NO";
    }
    cout<<ans<<nl;
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