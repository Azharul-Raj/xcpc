/**
 *    author:  raj_001
 *    created: 2024-05-11 18:07:20
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    string s;cin>>s;
    int l=0,r=0;
    string ans="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='b')l++;
        else if(s[i]=='B')r++;
        else {
            if(s[i]>='a' && l)l--;
            else if(s[i]<'a' && r)r--;
            else ans+=s[i];
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<nl;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
      solve();
   }
   return 0;
}