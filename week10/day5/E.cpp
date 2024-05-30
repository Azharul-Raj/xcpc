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
    if(k==1)cout<<"YES"<<nl;
    else if(f==l){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==l)cnt++;
        }
        if(cnt>=k)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }else{
        int firstElement=0,lastElement=0,idx=0;
        for(int i=0;i<n;i++){
            if(a[i]==f)firstElement++;
            if(firstElement==k){
                idx=i;break;
            }
        }
        for(int i=idx;i<n;i++){
            if(a[i]==l)lastElement++;
        }
        //
        if(firstElement==k && lastElement>=k)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
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