// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    for (ll &i : v)
        cin >> i;
    ll cnt = 1;
    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                cnt++;
            }
        }
    }
    cout<<sizeof(n)<<" ";
    cout << cnt / 2 << endl;
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
