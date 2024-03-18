/**
 *    author:  raj_001
 *    created: 2024-03-17 11:52:09
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    unordered_map<string,int> mp;
    vector<string> v1;
    vector<string> v2;
    vector<string> v3;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        mp[s]++;
        v1.push_back(s);
    }
    for(int i=0;i<n;i++){
        string s;cin>>s;
        mp[s]++;
        v2.push_back(s);
    }
    for(int i=0;i<n;i++){
        string s;cin>>s;
        mp[s]++;
        v3.push_back(s);
    }
    int a=0;int b=0;int c=0;
    for(string w:v1){
        // 
        if(mp[w]==2)a++;
        if(mp[w]==1)a+=3;
    }
    for(string w:v2){
        // 
        if(mp[w]==2)b++;
        if(mp[w]==1)b+=3;
    }
    for(string w:v3){
        // 
        if(mp[w]==2)c++;
        if(mp[w]==1)c+=3;
    }
    cout<<a<<" "<<b<<" "<<c<<'\n';
   }
   return 0;
}