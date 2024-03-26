/**
 *    author:  raj_001
 *    created: 2024-03-24 19:57:28
 **/
#include <bits/stdc++.h>
using namespace std;

//find the difference between
int diff(string& a,string& b){
    int val=0;
    for(int i=0;i<a.size();i++){
        val+=abs(a[i]-b[i]);
    }
    return val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;
        vector<string> str(n);
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=min(ans,diff(str[i],str[j]));
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}