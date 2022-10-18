//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v(n);
    ll ans=0;
    for (int i = 0; i < n; i++)
        cin>>v[i];

    sort(v.begin(),v.end());
       
    for(int i=0;i<n;i++)
        ans=max(ans,v[i]*(n-i));
    
    cout<<ans<<endl;
}

int main()
{
    int T=1;  
    // cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}