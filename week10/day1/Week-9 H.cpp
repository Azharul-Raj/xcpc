/**
 *    author:  raj_001
 *    created: 2024-05-24 23:17:04
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    vector<int> vc(26,0);
    string s;cin>>s;
    for(int i=0;i<s.size();i++){
      int idx=s[i]-'A';
      vc[idx]++;
    }
    //
    int odCnt=0;
    for(int v:vc){
      if(v%2==1)odCnt++;
    }
    //
    if(odCnt>1)cout<<"NO SOLUTION";
    else{
      string f="", b="",od="";
      for(int i=0;i<26;i++){
         if(vc[i]>0){
            //
            if(vc[i]%2==1){
               for(int j=0;j<vc[i];j++){
                  od+='A'+i;
               }
            }else{
               for(int j=0;j<vc[i]/2;j++)f+='A'+i;
               for(int j=vc[i]/2;j<vc[i];j++)b+='A'+i;
            }

         }
      }
      reverse(b.begin(),b.end());
      cout<<f<<od<<b;
    }

}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   // cin>>t;
   while(t--){
      solve();
   }
   return 0;
}