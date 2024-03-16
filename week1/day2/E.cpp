/**
 *    author:  raj_001
 *    created: 2024-03-16 09:05:27
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b,c;cin>>a>>b>>c;
   bool possible=0;
   int ans;
   for(int i=a;i<=b;i++){
        if(i%c==0){
            possible=1;
            ans=i;break;
        }
   }
    if(possible)cout<<ans<<'\n';
    else cout<<-1<<'\n';
   return 0;
}