/**
 *    author:  raj_001
 *    created: 2024-04-23 18:23:27
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
      string s1,s2;cin>>s1>>s2;
      vector<string> sub1;
      vector<string> sub2;
      if(s1==s2)cout<<0<<nl;
      else {
         for(int i=1;i<=s1.size();i++){
         int l=0,r=i;
         while(true){
            sub1.push_back(s1.substr(l,r-l));
            if(r==s1.size()){
               l=0,r=i;
               break;
            }
            l++;r++;
         }
      }
      //second condition
      for(int i=1;i<=s2.size();i++){
         int l=0,r=i;
         while(true){
            sub2.push_back(s2.substr(l,r-l));
            if(r==s2.size()){
               l=0,r=i;
               break;
            }
            l++;r++;
         }
      }
      //
      int sz=0;
      bool isFound=0;
      for(int i=sub1.size()-1;i>=0;i--){
         for(int j=sub2.size()-1;j>=0;j--){
            if(sub1[i]==sub2[j]){
               sz=sub1[i].size();isFound=1;
               break;
            }
         }
         if(isFound)break;
      }
      int total=s1.size()+s2.size()-(sz*2);
      cout<<total<<nl;
      }
   }
   return 0;
}