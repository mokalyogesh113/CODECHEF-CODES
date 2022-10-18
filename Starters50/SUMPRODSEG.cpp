// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;

    for (int i = 1; i <= sqrt(y); i++)
    {
        if(y%i!=0)  continue;
        ll y1 = i , y2 = y/y1;

        ll x1 = x/2;
        ll x2 = x/2 + (x%2) ;

        if((y1>x2 || y2<x1))
        {
            cout<<x1<<" "<<x2<<endl;
            cout<<y1<<" "<<y2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
