/**
 *    author:  raj_001
 *    created: 2024-03-23 23:10:26
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<string> str;
    for(int i=0;i<n;i++){
        int len;cin>>len;
        string st;cin>>st;
        str.push_back(st);
    }
    // for(int i=0;i<n;i++)cout<<str[i]<<" ";
    for(int i=0;i<n;i++){
        for(int j=0;j<str[i].size();j++){
            if(str[i][j]=='D'){
                v[i]++;
                if(v[i]==10){
                    v[i]=0;
                }
            }
            if(str[i][j]=='U'){
                v[i]--;
                if(v[i]==-1){
                    v[i]=9;
                }
            }
        }
    }
    for(int val:v)cout<<val<<" ";
    cout<<'\n';
   }
   return 0;
}