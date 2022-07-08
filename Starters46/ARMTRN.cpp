// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    ll att = 0, def = 0;
    for (ll &i : v)
    {
        cin >> i;
        def += (1000 - i);
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll curRating = att * def;
    ll maxRating = curRating;
    for (ll i : v)
    {
        att += i;
        def -= (1000 - i);
        curRating = att * def;
        maxRating = max(maxRating, curRating);
    }
    cout << maxRating << endl;
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
