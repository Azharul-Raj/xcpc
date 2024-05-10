/**
 *    author:  raj_001
 *    created: 2024-05-10 14:58:11
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

ll total(int n,vector<int> a){
    int freq[n]={0};
    for(int i=0;i<n;i++){

        if(a[i]==1)freq[i]=0;   
        else freq[i]=1;
    }
    int times=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(freq[i]==0)times++;
        else{
            sum+=freq[i]*times;
        }
    }
    return sum;
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    ll ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    int changedIdx=-1;
    
    ll f=total(n,a);
    ans=max(ans,f);
    int l=0,r=n;
    while(l<n){
        if(a[l]==0){
            changedIdx=l;
            a[l]=1;break;
        }
        l++;
    }
    
    ll s=total(n,a);
    ans=max(ans,s);
    if(changedIdx!=-1){
        a[changedIdx]=0;
    }
    while(r--){
        if(a[r]==1){
            a[r]=0;break;
        }
    }
    ll t=total(n,a);
    ans=max(ans,t);
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