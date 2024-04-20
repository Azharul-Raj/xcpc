/**
 *    author:  raj_001
 *    created: 2024-04-19 19:43:30
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
     int i=n-1;
      string ans;
     while(i>=0){
      int decVal=1;
      if(s[i]=='0' && s[i-1]=='0'){
            string str=(to_string(s[i-2]-48)+to_string(s[i-1]-48));
            int v=stoi(str)-1;
            char ch='a'+v;
            ans+=ch;
            decVal=3;
        }else if(s[i]=='0'){
          string str=(to_string(s[i-2]-48)+to_string(s[i-1]-48));
            int v=stoi(str)-1;
            char ch='a'+v;
            ans+=ch;
            decVal=3;
        }else{
          string st=to_string(s[i]-'0');
      
          int v=stoi(st)-1;
          
          int val=v+'a';
          char ch=val;
          
         ans+=ch;
        }
        i-=decVal;
     }
     reverse(ans.begin(),ans.end());
     cout<<ans<<nl;
   }
   return 0;
}