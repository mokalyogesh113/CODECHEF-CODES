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
    vector<vector<ll>> v1(n, vll(n, 0));
    vector<vector<ll>> ans(n, vll(n, 0));
    ll max = 0;
    for (ll i = 0; i < n; i++)
    {

        ll x1, y1;
        cin >> x1 >> y1;
        for (ll j = x1; j <= y1; j++)
        {
            if (i == 0 || j == 0)
            {
                v1[i][j] = 1;
                if (v1[i][j] > max)
                {
                    max = v1[i][j];
                }
            }
            else
            {
                v1[i][j] = min(v1[i - 1][j - 1], min(v1[i - 1][j], v1[i][j - 1])) + 1;
                if (v1[i][j] > max)
                {
                    max = v1[i][j];
                }
            }
        }
    }
    cout<<max<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    // cin >> T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;
}
