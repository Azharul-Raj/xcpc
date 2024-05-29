/**
 *    author:  raj_001
 *    created: 2024-05-29 17:58:05
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n,k;cin>>n>>k;vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int f=a[0];int l=a[n-1];
    int fCnt=0,sCnt=0;
    int idxM=0;
    for(int i=0;i<n;i++){
        if(a[i]==f){
            fCnt++;
            if(fCnt==k){
                idxM=i;break;
            }
        }
    }
    // cout<<fCnt<<nl;
    for(int i=idxM;i<n;i++){
        if(a[i]==l)sCnt++;
    }
    // cout<<fCnt<<"   "<<sCnt<<" " <<(sCnt/k)<<" "<<k<<nl;
    if(fCnt==k && (sCnt/k)>=1)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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