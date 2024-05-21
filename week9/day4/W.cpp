/**
 *    author:  raj_001
 *    created: 2024-05-21 09:10:50
 * https://codeforces.com/problemset/problem/1742/D
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

bool isPrime(int x){
    if(x<=1)return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return 0;
    }
    return 1;
}

void solve(){
    int n;cin>>n;vector<int> a(n),mx(1001);
    map<int,int> mp;
    int ans=-1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)mx[a[i]]=i+1;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(mx[i]&&mx[j] &&__gcd(i,j)==1){
                ans=max(ans,mx[i]+mx[j]);
            }
        }
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