/**
 *    author:  raj_001
 *    created: 2024-04-18 06:20:08
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
vector<int> palindromes;

int mxVal=(1<<15);
void findPalindromes( )
{
    for (int i = 0; i < mxVal; i++)
    {
    string s = to_string(i);
    int l = 0, r = s.size() - 1;
    bool isP = 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                isP = 0;
                break;
            }
            l++;r--;
        }
        if (isP)
        {
            palindromes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    findPalindromes();
    cin >> t;
    while (t--)
    {
        
        int n;cin>>n;
        vector<int>cnt(mxVal), a(n);
        for(int i=0;i<n;i++)cin>>a[i],cnt[a[i]]++;
        ll ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<palindromes.size();j++){
                int val=a[i]^palindromes[j];
                    ans+=cnt[val];
            }
        }
        cout<<ans/2<<nl;
    }
    return 0;
}