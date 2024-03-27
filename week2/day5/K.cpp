/**
 *    author:  raj_001
 *    created: 2024-03-27 10:37:39
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      string s;cin>>s;
      int count=0;
      int lB=0;
      for(int i=0;i<n;i++){
         if(s[i]=='('){
            lB++;
         }else{
            lB--;
            if(lB<0){
               count++;lB++;
            }
         }
      }
      cout<<count<<'\n';
   }
   return 0;
}