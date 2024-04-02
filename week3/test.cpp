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
    int a[n][m];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>a[i][j];
       }
      }
    // memset(mat,0,sizeof(mat));
    int mx=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        int now = 0;
			int ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci--;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci++;
				cj--;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci--;
				cj++;
			}
			ci = i, cj = j;
			while(ci >= 0 && ci < n && cj >= 0 && cj < m)
			{
				now+=a[ci][cj];
				ci++;
				cj++;
			}
			// now-=a[i][j]*3;
			mx = max(mx, now);
      }
    }
      cout<<mx<<nl;
   }
   return 0;
}