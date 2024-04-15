
/**
 *    author:  raj_001
 *    created: 2024-04-13 16:37:41
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
    int cnt=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int AND=a[i]&a[j];
            int OR=a[i]^a[j];
            if(AND>=OR){
                cnt++;
            }
        }
    }
    cout<<cnt<<nl;
   }
   return 0;
}