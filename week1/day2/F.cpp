/**
 *    author:  raj_001
 *    created: 2024-03-16 11:32:35
 **/
#include <bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b,t;cin>>a>>b>>t;
    int totalTime=t+.5;
    int numbers=(totalTime/a)*b;
    cout<<numbers;
   return 0;
}