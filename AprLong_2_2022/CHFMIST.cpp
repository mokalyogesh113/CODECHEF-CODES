//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll f1(ll n){
    return (n*(n+1))/2;
}

void solve()
{
    ll n;       
    cin>>n;
    vll v(n);   
    map<ll,ll> m;
    double sum=0;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        sum+=(float)v[i];
    }
    
    double mean = sum / (float)n;
    ll t = mean*2;
    ll ans=0;
    
    for(int i=1;i<=mean;i++){
        int j=t-i;
        if(i==j){
            ans+=f1(m[i]-1);
        }
        else{
            ans+=(m[i]*m[j]);
        }
    }
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

