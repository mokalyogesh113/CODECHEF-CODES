#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
#define mod 998244353

void solve()
{
    int n;      cin>>n;
    string s;    cin>>s;
    vll v(n,0);

    if (s[0] == '1')
        v[0] = 1;
    ll last = v[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '1')
            last += (i + 1);
        v[i]=last;
        v[i]%=2;
    }

    int p = 1,ans = 0;
    for (int i=n-1; i>=0; i--)
    {
        if (v[i]==1)
        {
            ans+=p;
            ans%=mod;
        }
        p*=2;
        p%=mod;
    }
    cout<<ans%mod<< endl;
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