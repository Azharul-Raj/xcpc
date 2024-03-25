/**
 *    author:  raj_001
 *    created: 2024-03-24 19:57:28
 **/
#include <bits/stdc++.h>
using namespace std;

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
            sort(str.begin(), str.end());
            int ans = INT_MAX;
            int v1 = 0;
            int v2 = 0;
            for (int i = 0; i < str[1].size(); i++)
            {
                char ch = str[1][i];
                int val = ch;
                v1 += val;
            }
            for (int i = 0; i < str[0].size(); i++)
            {
                char ch = str[0][i];
                int val = ch;
                v2 += val;
            }
            // for(int val:v)cout<<val<<" ";cout<<endl;
            cout << v1 - v2 << endl;
    }
    return 0;
}