// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    int a = 0, b = 0;
    if (m < n * 2)
    {
        cout << m << " " << m << endl;
        return;
    }
    if (m % n == 0)
    {
        cout << m << " " << n << endl;
        return;
    }

    ll x = m / 2;
    if (m > 2 * n)
    {
        x = 2 * n;
    }
    ll diff = 0;
    for (int i = n; i < x; i++)
    {
        ll currDiff = (i*(m / i))-i;
        if(currDiff>diff){
            a = i;
            b = m-(m%i);
            diff = currDiff;
        }
        n++;
    }
    cout<<a<<" "<<b<<endl;
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
