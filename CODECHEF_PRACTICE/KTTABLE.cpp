#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v1(n),v2(n);
    for(ll i=0;i<n;i++)    cin>>v1[i];    
    for(ll i=0;i<n;i++)    cin>>v2[i];    
    ll cnt=0, temp=0;
    for(ll i=0;i<n;i++)
    {
        if(v1[i]-temp>=v2[i])   cnt++;
        temp=v1[i];
    }
    cout<<cnt<<endl;

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