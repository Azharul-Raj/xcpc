/**
 *    author:  raj_001
 *    created: 2024-04-02 17:54:48
 **/
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    
    map<string,bool> words;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        string s;cin>>s;v[i]=s;words[s]=1;
        // cin>>v[i];
        // words[v[i]]=1;
    }
    for(int i=0;i<n;i++){
            string str=v[i];
            bool bit=0;
        for(int j=1;j<v[i].length();j++){
            string pre=str.substr(0,j),suf=str.substr(j,str.length()-j);
            if(words[pre]&&words[suf]){
                bit=1;
            }
        }
        cout<<bit;
    }
    cout<<nl;
   }
   return 0;
}