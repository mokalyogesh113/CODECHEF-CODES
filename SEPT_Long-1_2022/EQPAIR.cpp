//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

ll sumOfN(ll n)
{
    return (n*(n+1))/2;
}

void solve()
{
    ll n;
    cin>>n;
    vll v(n);
    map<ll,ll> mp;
    for(ll &i:v)
    {
        cin>>i;
        mp[i]++;
    }
    ll sum =0 ;
    for(auto i:mp)
    {
        if(i.second>1)
            sum+=sumOfN(i.second-1);
    }

    cout<<sum<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

