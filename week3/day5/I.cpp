/**
 *    author:  raj_001
 *    created: 2024-04-05 11:12:56
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
   vector<int> power;
   priority_queue<int> bonus;
   ll val=0;
   
   for(int i=0;i<n;i++){
      int a;cin>>a;
      if(a==0)power.push_back(a);
      else bonus.push(a);
      if(!bonus.empty() && power.size() ){
         val+=bonus.top();bonus.pop();
         power.pop_back();
      }else if(power.size() && bonus.empty())power.pop_back();
   }
   cout<<val<<nl;
   }
   return 0;
}