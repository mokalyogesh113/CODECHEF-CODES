#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,k;    cin>>n>>k;
    vll v(n);
    for(int  i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<>());
    ll score = v[k-1],count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=score) count++;
        else    break;
    }
    cout<<count<<endl;
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