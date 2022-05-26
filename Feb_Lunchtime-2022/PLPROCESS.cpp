#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v(n);
    ll sum=0;
    ll ans = INT64_MAX;
    for(ll i=0;i<n;i++){
        cin>>v[i];    
        sum+=v[i];
    }
    ll temp=0;
    for(ll i=0;i<n;i++){
        temp=temp+v[i];
        ans=min(ans,max(temp,sum-temp));
    }
    cout<<ans<<endl;
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}