/**
 *    author:  raj_001
 *    created: 2024-05-31 22:44:31
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define nl '\n'
#define ll long long int
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int oldV = -1, oldM = -1, newM, newV;
    int l = 0, r = 0;
    pbds<int> st;
    ll coast;
    while (r < n)
    {
        st.insert(a[r]);
        if (r - l + 1 == k)
        {
            int idx = ((k + 1) / 2) - 1;
            // newM = st.find_by_order(idx);
            newV = a[r];

            if (oldV == -1 && oldM == -1)
            {
                oldM = *(st.find_by_order(idx));
                coast = 0;
                for (int i = 0; i < k; i++)
                {
                    coast += abs(oldM - a[i]);
                }
                cout << coast << " ";
                oldV = a[l];
            }
            else
            {
                newM = *(st.find_by_order(idx));
                coast += (abs(newM - newV) - abs(oldM - oldV));
                oldV = a[l];
                if (k % 2 == 0)
                {
                    coast -= (newM - oldM);
                }
                oldM = newM;
                cout << coast << " ";
            }

            st.erase(st.find_by_order(st.order_of_key(a[l])));
            l++;
        }
        r++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}