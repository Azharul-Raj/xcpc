/**
 *    author:  raj_001
 *    created: 2024-04-04 09:26:19
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   vector<int> power;
   priority_queue<int> bonus;
   int val=0;
   
   for(int i=0;i<n;i++){
      int a;cin>>a;
      if(a==0)power.push_back(a);
      else bonus.push(a);
      if(power.size() && !bonus.empty()){
         val+=bonus.top();bonus.pop();
         power.pop_back();
      }
   }
   cout<<val;
   return 0;
}