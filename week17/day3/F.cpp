/**
 *    author:  raj_001
 *    created: 2024-08-19 09:14:40
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define int long long int
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ys cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        for (int i = n; i >= 1; i--)
            cout << i << " ";
        cout << nl;
        return;
    }
    int range = n / 2;
    if (n % 2 == 0)
    {
        range--;
    }
    int f = 1;
    int nxt = 0;
    //
    cout << 2 << " ";
    for (int i = n; i > n / 2; i--)
    {
        if (f == range)
        {
            nxt = i;
            break;
        }
        else
        {
            f++;
        }

        if (i != 2 && i != 3)
            cout << i << " ";
    }
    //
    cout << 1 << " ";
    for (int i = nxt; i > 3; i--)
        cout << i << " ";
    cout << 3 << nl;
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