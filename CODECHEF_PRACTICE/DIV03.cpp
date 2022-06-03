//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n=10;
    vll v(n);
    for(ll &i:v)    cin>>i;
    ll ans;         cin>>ans;
    ll i;
    for(i=n-1;i>=0;i--)
    {
        if(ans<v[i] && v[i]!=0)    break;
        ans = ans -v[i];
    }
    cout<<i+1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

