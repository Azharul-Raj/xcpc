/**
 *    author:  raj_001
 *    created: 2024-05-24 21:52:27
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;


void solve(){
    int n,target;cin>>n>>target;
    vector<pair<int,int>> vp;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        vp.push_back({x,i});
    }
    sort(vp.begin(),vp.end());
    vector<int> ans;
    for(int i=0;i<n;i++){
        int curr=vp[i].first;
        int l=i+1,r=n-1;
        int exist=false;
        while(l<r){

            ll sum=curr+vp[l].first+vp[r].first;
            if(sum==target){
                exist=1;
                ans.push_back(vp[i].second);ans.push_back(vp[l].second);ans.push_back(vp[r].second);
                break;
            }

            if(sum>target) r--;
            if(sum<target)l++;
        }
        if(exist)break;
    }
    if(ans.empty())cout<<"IMPOSSIBLE"<<nl;
    else {
        sort(ans.begin(),ans.end());
        for(int v:ans)cout<<v<<" ";
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