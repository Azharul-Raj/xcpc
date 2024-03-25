/**
 *    author:  raj_001
 *    created: 2024-03-25 17:46:32
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      set<int> st;
      for(int i=0;i<n;i++){
         int a;cin>>a;
         st.insert(a);
      }
      if((n-st.size())%2==0)cout<<st.size()<<'\n';
      else cout<<st.size()-1<<'\n';
   }
   return 0;
}