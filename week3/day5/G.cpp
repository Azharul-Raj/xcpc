/**
 *    author:  raj_001
 *    created: 2024-04-04 20:02:51
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
    vector<int> a(n);
    map<int,int> cnts;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnts[a[i]]++;
        s.insert(a[i]);
        s.insert(a[i]+1);
    }
    int last=0;
    int res=0;
    for(int val:s){
        int cnt=cnts[val];
        res+=max(0,cnt-last);
        last=cnt;
    }
    cout<<res<<nl;
   }
   return 0;
}