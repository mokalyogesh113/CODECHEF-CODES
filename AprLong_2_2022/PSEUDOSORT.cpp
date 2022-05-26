//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;           cin>>n;
    vll v(n);       cin>>v[0];
    ll large=v[0],cnt=0;
    for(int i=1;i<n;i++){
        cin>>v[i];
        if(large<=v[i]){
            large=v[i];
        }
        else{
            cnt++;
            if(v[i-2] > v[i] && i>=2)
                cnt++;
        }
    }
    if(cnt<=1){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
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

