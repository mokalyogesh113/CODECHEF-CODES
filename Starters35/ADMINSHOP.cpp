//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,x;
    cin>>n>>x;
    vll v(n);
    for(ll &i:v)   cin>>i;
    ll min=*min_element(v.begin() ,v.end());
    ll t = x/min;
    if(x%min!=0)  t++;
    cout<<max(n,t)<<endl;

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

