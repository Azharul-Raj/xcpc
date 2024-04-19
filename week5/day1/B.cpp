/**
 *    author:  raj_001
 *    created: 2024-04-19 19:36:04
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
   cout<<"here";
   while(t--){
      int n;cin>>n;
      string s;cin>>s;
      // cout<<s;
      for(int i=n-1;i>=0;){
        if(s[i]=='0' && s[i-1]=='0'){
            // string str=s[i-2]+s[i-1];
            string str=(to_string(s[i-2]-48)+to_string(s[i-1]-48));
            int v=stoi(str)-1;
            char ch='a'+v;cout<<ch;
            i-=3;
        }else if(s[i]=='0'){
          string str=(to_string(s[i-1]-48)+to_string(s[i]-48));
            int v=stoi(str)-1;
            char ch='a'+v;cout<<ch;
            i-=2;
        }else{
          string s=to_string(s[i]-48);
          int v=stoi(s)-1;
          char ch='a'+v;
          cout<<ch;
          i--;
        }
      }
      cout<<nl;
   }
   return 0;
}