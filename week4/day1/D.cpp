/**
 *    author:  raj_001
 *    created: 2024-04-12 22:26:13
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    int XOR=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i],XOR^=a[i];
    if(XOR==0)cout<<0<<nl;
    else {
        if(n%2==1)cout<<XOR<<nl;
        else cout<<-1<<nl;
    }
   }
   return 0;
}