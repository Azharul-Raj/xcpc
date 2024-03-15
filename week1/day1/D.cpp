/**
 *    author:  raj_001
 *    created: 2024-03-15 16:18:27
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   string s=to_string(n);
   int sz=s.size();
//    cout<<sz;
   for(int i=sz;i<4;i++){
    cout<<0;
   }
   cout<<n;
   return 0;
}