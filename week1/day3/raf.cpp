/**
 *    author:  raj_001
 *    created: 2024-03-17 10:34:44
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b,c;cin>>a>>b>>c;
   bool isP=0;
   if(c%a==0 || c%b==0){
    isP=1;
   }else{
    int firstRest=c%a;
    int firstCheck=firstRest%b;
    int secondRest=c%b;
    int secondCheck=secondRest%a;
    if(firstCheck==0 || secondCheck==0){
        isP=1;
    }
   }
   if(isP)cout<<"Yes"<<'\n';
   else cout<<"No"<<'\n';
   return 0;
}