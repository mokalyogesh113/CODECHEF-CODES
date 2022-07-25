// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(), (c).end()
#define scanArray(v)  \
    for (auto &i : v) \
        cin >> i;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    scanArray(v);
    vll v2(v);
    sort(all(v2));
    vll ar1, ar2;
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == v2[j])
        {
            ar1.push_back(v2[i]);
            j++;
        }
        else
        {
            ar2.push_back(v[i]);
        }
    }
    
    if (is_sorted(all(ar2)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;
}
