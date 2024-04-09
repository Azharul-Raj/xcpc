/**
 *    author:  raj_001
 *    created: 2024-04-08 10:40:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    int XOR=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i],XOR^=a[i];
    int ans=XOR;
    for(int i=0;i<n;i++){
        ans=min(ans,(XOR^a[i]));
    }
    cout<<ans<<nl;
   }
   return 0;
}