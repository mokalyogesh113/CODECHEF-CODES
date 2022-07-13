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
    vll v(n + 1);
    for (ll &i : v)
        cin >> i;

    vll ans(3, 0);

    for (ll i = 1; i <= n; i *= 2)
    {
        ll diff = (v[i] - v[0]) / i;
        ll cnt = (3 - diff) / 2;
        // -3 cnt = 3
        // -1 cnt = 2
        //  1 cnt = 1;
        //  3 cnt = 0
        if (cnt == 3)
        {
            ans[0] ^= i;
            ans[1] ^= i;
            ans[2] ^= i;
        }
        else if (cnt == 2)
        {
            if ((ans[0] ^ i) <= n)
            {
                ans[0] ^= i;
                cnt--;
            }
            if (cnt && ((ans[1] ^ i) <= n))
            {
                ans[1] ^= i;
                cnt--;
            }
            if (cnt && ((ans[2] ^ i) <= n))
            {
                ans[2] ^= i;
            }
        }
        else if (cnt == 1)
        {
            if ((ans[0] ^ i) <= n)
            {
                ans[0] ^= i;
            }
            else if ((ans[1] ^ i) <= n)
            {
                ans[1] ^= i;
            }
            else
            {
                ans[2] ^= i;
            }
        }
        sort(ans.begin(), ans.end());
    }

    for (int i : ans)
        cout << i << " ";
    cout << endl;
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
