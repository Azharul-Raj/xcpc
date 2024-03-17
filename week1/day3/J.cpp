/**
 *    author:  raj_001
 *    created: 2024-03-17 09:52:06
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b,c;cin>>a>>b>>c;
   bool isP=0;
   for(int i=0;i<=c;i++){
    for(int j=0;j<=c;j++){
        if(i*a+b*j>c)break;
        if(i*a+b*j==c){
            isP=1;break;
        }
    }
   }
   if(isP)cout<<"Yes"<<'\n';
   else cout<<"No"<<'\n';
   return 0;
}