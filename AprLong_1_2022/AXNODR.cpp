//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,ans;
    cin>>n;
    if(n%4==0)  ans=n+3;
    else if(n%4==1) ans=n;
    else    ans=3;
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