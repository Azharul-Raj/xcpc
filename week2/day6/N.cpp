/**
 *    author:  raj_001
 *    created: 2024-03-28 11:26:27
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){

   int freq[26];
   int x=0;
    int n,k;cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
      freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
      if(freq[i]%2==1){
         x++;
      }
    }
    if(x>k+1)cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
   }
   return 0;
}