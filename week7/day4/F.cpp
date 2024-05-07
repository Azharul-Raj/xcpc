/**
 *    author:  raj_001
 *    created: 2024-05-07 16:18:35
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());sort(b.begin(),b.end());
    bool possible=1;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])possible=0;
       else if(b[i]-a[i]>1)possible=0;
    }
    cout<<(possible?"YES":"NO")<<nl;
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