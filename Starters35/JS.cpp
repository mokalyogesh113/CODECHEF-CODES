//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vll v(n);
    ll ec=0,oc=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2)  oc++;
        else        ec++;
    }
    if(v[0]%2==0 && v[n-1]%2==0){
        cout<<ec-1<<endl;
    }
    else if(v[0]%2==1 && v[n-1]%2==1){
        cout<<oc-1<<endl;
    }
    else{
        if(v[n-2]%2!=v[n-1]%2){
            cout<<min(oc,ec)<<endl;
        }
    }
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

