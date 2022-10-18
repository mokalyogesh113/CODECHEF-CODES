#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];

    sort(v.begin(),v.end());

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll temp=v[i]*(n-i);
        if(temp>ans)    ans=temp;
    }

    cout<<ans<<endl;

}

int main()
{
    solve();

    return 0;    
}