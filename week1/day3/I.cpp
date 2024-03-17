/**
 *    author:  raj_001
 *    created: 2024-03-16 17:54:09
 **/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int x, y;
    cin >> x >> y;
    int seq = 1;
    long long int val = x;
    for (long long int i = x; i <= y; i++)
    {
        if (val <= y)
        {
            val = val * 2;
            if (val > y)
            {
                break;
            }
            else
            {
                seq++;
            }
        }
    }
    cout << seq;
    return 0;
}