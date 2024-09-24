#include <bits/stdc++.h>

using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

#define int long long

void CoderAbhi27()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(m);
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
    } // O(m*n)

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int c0 = 0, c1 = 0, c2 = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[j][i] == '1')
                c1++;
            else if (s[j][i] == '0')
                c0++;
            else
                c2++;
        } // O(m)

        if (c1 < c0)
            swap(c1, c0);
        if (c2 <= c1 - c0)
        {
            ans += c1 * (c0 + c2);
        }
        else
        {
            // int sum=c0+c1+c2;
            ans += (m / 2) * ((m + 1) / 2);
        }
    } // O(n*m)

    cout << ans << '\n';
}

// tc -> O(n*m)

int32_t main()
{
    fastIO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        CoderAbhi27();
    }
    return 0;
}