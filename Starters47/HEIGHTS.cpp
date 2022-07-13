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

    ll mx = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mx, v[i]);
    }

    int res = 0;
    ll maxCount = 0;
    for (auto i : mp)
    {
        if (i.second == 1)
            res++;
        maxCount = max(maxCount, i.second);
    }

    if (res % 2)
    {
        int ans = (res + 1) / 2;
        if (mp[mx] == 1)
        {
            if (maxCount == 2)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    else{
        cout<<(res/2)<<endl;
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
