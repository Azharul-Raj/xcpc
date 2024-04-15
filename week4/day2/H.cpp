/**
 *    author:  raj_001
 *    created: 2024-04-15 07:47:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      int n;cin>>n;
      string s;cin>>s;
      int v=0;
      int mm=0;
      for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])mm++;
      }
      cout<<mm;
   }
   return 0;
}