/**
 *    author:  raj_001
 *    created: 2024-03-15 15:27:40
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b;cin>>a>>b;
   int count=0;
   for(int i=a;i<=b;i++){
      count++;
   }
   cout<<count;
   return 0;
}