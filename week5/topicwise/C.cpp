/**
 *    author:  raj_001
 *    created: 2024-04-26 22:02:46
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    while(k--){
        int key;cin>>key;
        int l=-1,r=n;
        while(r>l+1){
            int m=(l+r)/2;
            if(a[m]>=key)r=m;
            else l=m;
        }
        cout<<r+1<<nl;
    }
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