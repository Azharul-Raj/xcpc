/**
 *    author:  raj_001
 *    created: 2024-03-16 11:45:11
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   string s;cin>>s;
//    sort(s.begin(),s.end());
//    cout<<s<<endl;
   int freq[26]={0};
   for(char ch:s){
    int v=ch-'a';
    // cout<<v<<" ";
    freq[v]++;
   }
   bool isExist=0;
   for(int i=0;i<26;i++){
    if(freq[i]==0){
        isExist=1;
        char ch=i+'a';
        cout<<ch;break;
    }
   }
   if(!isExist)cout<<"None";
   return 0;
}