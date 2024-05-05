/**
 *    author:  raj_001
 *    created: 2024-05-05 18:19:55
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int l=1;
    int cnt=0;
    while(l<n){
        if(s[l-1]!=s[l]){
            cnt++;l+=2;
        }else l++;
    }
    cout<<cnt;
    // if(cnt%2==1)cout<<"Zlatan"<<nl;
    // else cout<<"Ramos"<<nl;
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