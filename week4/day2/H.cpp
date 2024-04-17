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
      int l=0;int r=n-1;
      int mm=0;
      int gp=0;
      while(l<r){
         if(s[l]==s[r])gp+=2;
         else mm++;
         l++;r--;
      }
      vector<char> ans;
      int j=0;
      for(int i=0;i<=n;i++){
         if(i<mm)ans.push_back('0');
         else if (i==mm)ans.push_back('1');
         else if(n%2==0){
            if(i%2==1)ans.push_back('0');
            else{
               if(mm+gp>=i)ans.push_back('1');
               else ans.push_back('0');
            }
         }
         else{
            if((mm+gp+1)>=i)ans.push_back('1');
            else ans.push_back('0');
         }
      }
      for( char v:ans)cout<<v;
      cout<<nl;
   }
   return 0;
}