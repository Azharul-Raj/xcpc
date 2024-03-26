/**
 *    author:  raj_001
 *    created: 2024-03-26 21:42:00
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    string ans="YES";
    for(int i=0;i<n;i++){
        if(a[i]=='R' && b[i]!='R' || b[i]=='R' && a[i]!='R'){
           ans="NO";
        }
    }
    cout<<ans<<'\n';
   }
   return 0;
}