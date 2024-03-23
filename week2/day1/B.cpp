/**
 *    author:  raj_001
 *    created: 2024-03-23 17:34:13
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int k,s;cin>>k>>s;
   int count=0;
   for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
        int rest=s-(i+j);
            if(rest>=0 && rest<=k){
                count++;
            }
    }
   }
   cout<<count;
   return 0;
}