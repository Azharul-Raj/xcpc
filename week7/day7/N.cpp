/**
 *    author:  raj_001
 *    created: 2024-05-10 10:17:35
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    ll last=(ll)n*(n+1)/2-sum;
    a.push_back((int)last);
    k%=n+1;
    rotate(a.begin(),a.begin()+(n+1)-k,a.end());
    
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<nl;
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