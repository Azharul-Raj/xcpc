/**
 *    author:  raj_001
 *    created: 2024-05-06 06:59:28
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    int ans=INT_MAX;
    for(int i=0;i<n;i++)cin>>a[i];
    for (int i = 0; i < n; i++) {
            int cur = 0;
            if (i > 0) cur = max(cur, abs(a[i] - a[i-1]));
            if (i+1 < n) cur = max(cur, abs(a[i] - a[i+1]));
            ans = min(ans, cur);
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