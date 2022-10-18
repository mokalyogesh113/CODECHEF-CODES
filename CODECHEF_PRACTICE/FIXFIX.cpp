#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n-1==k) {
        cout<<-1<<endl;
        return;
    }
    
    else    
        for (ll  i = 1; i <= k; i++)
            cout<<i<<" ";
        for(ll i=k+2;i<=n;i++)
            cout<<i<<" ";
        if(n!=k)
            cout<<k+1;
        cout<<endl;

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