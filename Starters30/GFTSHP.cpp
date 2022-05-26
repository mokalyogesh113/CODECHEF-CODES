//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,k;    cin>>n>>k;
    vll v(n);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }   
    if(sum<=k)
    {
        cout<<n<<endl;
        return;
    }

    sort(v.begin(),v.end());
    ll ans=n;
    for(ll i=n-1;i>=0;i--)
    {
        if(sum<=k)
            break;
        
        sum-=v[i];

        ll t=round((float)v[i]/2);
        if(sum+t<=k)
            break;
        ans--;
    }
    cout<<ans<<endl;
    

}
int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}