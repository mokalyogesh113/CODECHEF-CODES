// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (a % b == 0)
    {
        cout<<-1<<endl;
        return;
    }
    ll i;
    if (n % a == 0)
    {
        i = n / a;
    }
    else
    {
        i = (n / a) + 1;
    }

    while (1)
    {
        if ((i * a) % b != 0)
        {
            cout << a * i << endl;
            return;
        }
        i++;
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
