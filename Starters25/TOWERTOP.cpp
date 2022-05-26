#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll x,m; cin>>x>>m;
    ll ans= (log(x)/log(2))+2;
    if(ceil(log(x)/log(2)) == floor(log(x)/log(2))  ) 
        ans--;
    if(ans>m)
        cout<<0<<endl;
    else
        cout<<m+1-ans<<endl;   
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