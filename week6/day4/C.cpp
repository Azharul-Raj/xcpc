/**
 *    author:  raj_001
 *    created: 2024-05-01 18:25:13
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(k);
    for(int i=0;i<k;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll move=0,cnt=0;
    for(int i=k-1;i>=0;i--){
        if(move>=a[i])break;
        else cnt++;
        move+=(n-a[i]);
    }
    cout<<cnt<<nl;
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