/**
 *    author:  raj_001
 *    created: 2024-08-11 08:44:13
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

void solve()
{
   int n;
   cin >> n;
   vector<int> a(n);
   for (int &v : a)
      cin >> v;
   for (int i = 1; i < n; i++)
      cout << a[i] << " ";
   cout << a[0];
   cout << nl;
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