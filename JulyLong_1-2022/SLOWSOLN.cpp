// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int maxT, maxN, sumN;
    cin >> maxT >> maxN >> sumN;
    int t1 = sumN / maxN;
    int rem = sumN % maxN;
    ll ans = 0;
    if (t1 + 1 <= maxT)
    {
        ans = (maxN * maxN * t1) + (rem * rem);
    }
    else if (t1 <= maxT)
    {
        ans = (maxN * maxN * t1);
    }
    else
    {
        ans = maxN * maxN * maxT;
    }

    cout << ans << endl;
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
