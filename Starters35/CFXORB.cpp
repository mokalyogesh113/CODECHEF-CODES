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
    vll v(n),ev,ov; 
    int o=0,e=0;
    for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]%2) { o++;  ov.push_back(v[i]); }
            else        {e++;  ev.push_back(v[i]); }
    }
    ll x;  cin>>x;
    int ans=(o*o)+(e*e);
    if(o!=0 && e!=0)
   { 
        for(int i=0;i<o;i++){
            for(int j=0;j<e;j++){
                if(((ov[i] ^ ev[j]) & x ) ==0 ) ans+=2;
            }
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