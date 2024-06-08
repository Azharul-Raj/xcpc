/**
 *    author:  raj_001
 *    created: 2024-06-08 18:28:32
 **/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;

void solve()
{
    int x;
    cin >> x;
    vector<int> a;
    while (x > 0)
    {
        int append = 0;
        if ((x & 3) == 3)
        {
            append = -1;
            x++;
        }
        else if ((x & 1) == 1)
        {
            append = 1;
            x--;
        }
        else
            append = 0;
        x >>= 1;
        a.push_back(append);
    }
    cout << a.size() << nl;
    for (int v : a)
        cout << v << " ";
    cout << nl;
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