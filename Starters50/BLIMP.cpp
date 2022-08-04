//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll m1 = max(x,y);
    int sum = 0 ;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=x;
    }

    ll t = m1*n;
    ll ans = sum/t + (sum%t==0 ? 0 : 1);
    
    cout<<ans<<endl;
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

