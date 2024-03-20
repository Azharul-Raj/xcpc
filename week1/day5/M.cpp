/**
 *    author:  raj_001
 *    created: 2024-03-20 10:23:00
 **/
#include <bits/stdc++.h>
using namespace std;

int findOdd(int arr[],int sz,int i){
    if(i==sz) return 0;
    if(arr[i]%2==1){
        return arr[i];
    }else{
        return findOdd(arr,sz,i++);
    }
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n;cin>>n;
   int arr[n];
   long long int sum=0;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
   }
   sort(arr,arr+n);

   if(sum%2==1){
    int v=findOdd(arr,n,0);
    cout<<sum-v<<'\n';
   }else cout<<sum<<'\n';

   return 0;
}