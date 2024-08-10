/**
 *    author:  raj_001
 *    created: 2024-08-09 18:08:55
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

// int n,k;vector<int> a;

// bool good(double x){
//     double len=0;
//     for(int i=0;i<n;i++){
//         len+=(a[i]/x);
//     }
//     return len>=k;
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &v : a)
        cin >> v;
    int l = 0, r = n - 1, ans = -1;

    int v;
    cin >> v;
    auto it = upper_bound(all(a), 9);
    cout << it - a.begin() << nl;
}

int32_t main()
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