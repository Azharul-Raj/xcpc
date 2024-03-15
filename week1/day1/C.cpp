/**
 *    author:  raj_001
 *    created: 2024-03-15 15:53:52
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b;cin>>a>>b;
   if(a==b)cout<<a+b;
   if(a>b){
    cout<<a+a-1;
   }
   if(b>a){
    cout<<b+b-1;
   }
   return 0;
}