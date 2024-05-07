/**
 *    author:  raj_001
 *    created: 2024-05-07 15:40:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string s2=s;
    reverse(s2.begin(),s2.end());
    if(s==s2)cout<<0<<nl;
    else{
        int ans=INT_MAX;
    for(int i=0;i<26;i++){
        char ch=i+97;
        int l=0,r=n-1,cnt=0;
        while(r>=l){
            if(s[l]==s[r])l++,r--;
            else if(s[l]==ch){
                l++,cnt++;
            }
            else if(s[r]==ch){
                r--,cnt++;
            }
            else {
                cnt=0;break;
            }
        }
        if(cnt>0)ans=min(cnt,ans);
    }
    if(ans==INT_MAX)cout<<-1<<nl;
    else cout<<ans<<nl;
    }
    
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