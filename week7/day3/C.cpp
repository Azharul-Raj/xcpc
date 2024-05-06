/**
 *    author:  raj_001
 *    created: 2024-05-06 10:58:14
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    bool isP=1;
    int zero=0,diff=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0)zero++;
        else if(b[i]>a[i])isP=0;
        else if(b[i]!=0)diff=a[i]-b[i];
    }
    //
    // cout<<isP<<nl;;
    for(int i=0;i<n;i++){
        if(b[i]==0 && a[i]-b[i]>diff){
           isP=0;
        }else if( b[i]!=0 && a[i]-b[i]!=diff){
            isP=0;
        }
    }
    if(zero==n)isP=1;
    cout<<(isP?"YES":"NO")<<nl;
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