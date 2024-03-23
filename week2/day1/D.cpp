/**
 *    author:  raj_001
 *    created: 2024-03-23 22:30:55
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   string s,t;cin>>s>>t;
   int count=0;
   for(int i=0;i<s.size();i++){
      if(s[i]!=t[i]){
         count++;
      }
   }
   cout<<count;
   return 0;
}