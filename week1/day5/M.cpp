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

   int smallestOdd=INT_MAX;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==1){
        smallestOdd=min(smallestOdd,arr[i]);
    }
    sum+=arr[i];
   }
   sort(arr,arr+n);
   if(sum%2==1){
    cout<<sum-smallestOdd<<'\n';
   }else cout<<sum<<'\n';

   return 0;
}