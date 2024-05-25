/**
 *    author:  raj_001
 *    created: 2024-05-25 20:00:41
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int pair=0;
    for(int i=0;i<n;i++){
      if(a[i]==1)pair+=n;
      else{
         ll pw=1;
         for(int j=0;j<n;j++){
            pw*=a[i];
            if(pw>(1e9/a[i]))break;
            if(pw<=a[j])pair++;
         }
      }
    }
    cout<<pair<<nl;
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