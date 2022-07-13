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
    ll count_of_one = 0 , sum = 0;
    vll v(n);
    for (ll &i : v)
    {
       cin>>i;
       if(i==1) count_of_one++;
       sum += (i-1)%2;
       sum = sum%2;
    }
    if(count_of_one == 1)
    {

    }
    if(sum%2){
        cout<<"CHEF"<<endl;
    }
    else{
        cout<<"CHEFINA"<<endl;
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
