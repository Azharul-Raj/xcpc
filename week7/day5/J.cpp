/**
 *    author:  raj_001
 *    created: 2024-05-08 15:05:22
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int reminder=sum%n;
    if(reminder==0){
        for(int i=1;i<=n;i++)cout<<i<<" ";
    }else{
        int sub=reminder-1;
        int first=n-sub;
        cout<<first<<" ";
        for(int i=2;i<=n;i++)cout<<i<<" ";
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