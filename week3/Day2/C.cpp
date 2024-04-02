/**
 *    author:  raj_001
 *    created: 2024-04-01 19:25:16
 **/
#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int n,m;
bool isValid(int i,int j){
   return i>=0 && j>=0 && i<n && j<m;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;cin>>t;
   while(t--){
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>mat[i][j];
       }
      }
    // 
    int ans=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
         int sum=0;
         int fi=i;int fj=j;
         while(isValid(fi,fj)){
            sum+=mat[fi][fj];
            fi--;fj--;
         }
         fi=i;fj=j;
         while(isValid(fi,fj)){
            sum+=mat[fi][fj];
            fi++;fj--;
         }
         fi=i;fj=j;
         while(isValid(fi,fj)){
            sum+=mat[fi][fj];
            fi--;fj++;
         }
         fi=i;fj=j;
         while(isValid(fi,fj)){
            sum+=mat[fi][fj];
            fi++;fj++;
         }
         sum-=mat[i][j]*3; 
         ans=max(ans,sum);
       }
      }
      cout<<ans<<nl;
   }
   return 0;
}