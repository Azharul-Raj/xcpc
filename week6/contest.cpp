/**
 *    author:  raj_001
 *    created: 2024-05-02 22:12:41
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
   vector<char> a(n),b(m);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];
   int l=0,r=0,cnt=0;
   while(l<n){
    if(a[l]==b[r]){
        cnt++;l++;r++;
    }else{
        r++;
    }
    if(r==m)break;
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