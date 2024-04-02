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
    vector<pair<string,bool>> v(n);
    for(int i=0;i<n;i++){
        string a;cin>>a;
        v[i]={a,0};
        words.insert({a,0});
        
    }
    
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string str=v[i].first+v[j].first;
            if(words.find(str)!=words.end()){
                words[str]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        string s=v[i].first;
        if(words[s]==1){
            v[i].second=1;
        }
    }
    for(int i=0;i<n;i++)cout<<v[i].second;
    cout<<nl;
   }
   return 0;
}