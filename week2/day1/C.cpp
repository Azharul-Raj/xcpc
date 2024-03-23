/**
 *    author:  raj_001
 *    created: 2024-03-23 22:26:14
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,x;cin>>n>>x;
   vector<int> v;
   for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a==x)continue;
    else v.push_back(a);
   }
   //
   for(int val:v)cout<<val<<" ";
   return 0;
}