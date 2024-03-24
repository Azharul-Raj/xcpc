/**
 *    author:  raj_001
 *    created: 2024-03-24 10:14:20
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
    sort(s.begin(),s.end());
    string rightString="Timru";
    if(s==rightString){
        cout<<"YES"<<'\n';
    }else cout<<"NO"<<'\n';
   }
   return 0;
}