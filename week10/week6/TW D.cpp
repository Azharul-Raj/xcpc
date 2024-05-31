/**
 *    author:  raj_001
 *    created: 2024-05-31 22:44:31
 **/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;


template <typename T> using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int oldV=-1,oldM=-1,newM,newV;
    int l=0,r=0;
    pbds<pair<int,int>> st;
            ll coast;
    while(r<n){
        st.insert({a[r],r});
        if(r-l+1==k){
            int idx=k/2;
            newM=st.find_by_order(idx)->first;
            newV=a[r];
            if(oldV==-1 && oldM==-1){
                coast=0;
                for(int i=0;i<k;i++){
                    coast+=abs(newM-a[i]);
                }
                cout<<coast<<" ";
                oldM=newM;oldV=a[l];
            }else{
                coast+=(abs(newM-newV)-abs(oldM-oldV));
                cout<<coast<<" ";
                oldM=newM;oldV=a[l];
            }
            st.erase({a[l],l});
            l++;
        }
        r++;
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