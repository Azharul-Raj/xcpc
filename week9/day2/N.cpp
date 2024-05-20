/**
 *    author:  raj_001
 *    created: 2024-05-19 17:32:28
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
const int N=1005;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    vector<int> color(N,0);
    for(int i=0;i<n;i++)cin>>a[i];

    int k=1;
    for(int i=0;i<n &&color[a[i]]==0;i++){
        color[a[i]]=k;
        for(int j=i+1;j<n;j++){
            if(color[a[j]]==0 && __gcd(a[i],a[j])>1)color[a[j]]=k;
        }
        k++;
    }
    cout<<k<<nl;
    for(int i=0;i<n;i++){
        cout<<color[a[i]]<<" ";
    }
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