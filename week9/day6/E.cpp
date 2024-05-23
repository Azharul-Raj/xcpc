/**
 *    author:  raj_001
 *    created: 2024-05-23 16:54:33
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> e,o;
    if(n==1)cout<<1<<nl;
    else if(n<=3)cout<<"NO SOLUTION"<<nl;
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0)e.push_back(i);
            else o.push_back(i);
        }
        for(int v:e)cout<<v<<" ";
        for(int v:o)cout<<v<<" ";
        cout<<nl;
    }
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
//    cin>>t;
   while(t--){
      solve();
   }
   return 0;
}