//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

void primeFactors(ll n,map<ll,ll> &mp)
{
    while (n % 2 == 0)
    {
        mp[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n = n/i;
        }
    }

    if (n > 2)
        mp[n]++;
}

void solve()
{
    ll n,k;
    cin>>n>>k;

    vll v(n);
    map<ll,ll> mp1 , mp2;

    primeFactors(k,mp1);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        primeFactors(v[i], mp2);
    }
    
    bool flag = 1;
    for(auto i:mp1)
    {
        if(i.second> mp2[i.first]){
            flag = 0;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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

