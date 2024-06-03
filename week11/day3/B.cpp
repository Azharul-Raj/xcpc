/**
 *    author:  raj_001
 *    created: 2024-06-02 10:18:30
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<int, int> cnt;
    ll ans = 0;

    int prefixSum = 0;
    cnt[0]++;
    ans = n * (1ll) * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            prefixSum++;
        else
            prefixSum--;
        ans += cnt[prefixSum]++;
    }
    //
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}