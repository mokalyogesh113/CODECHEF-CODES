//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll f(ll n){
    ll t=(n*(n+1))/2;
    t = t>0 ? t : 0;
    return t;
}

void solve()
{
     ll n;    cin>>n;
     vll v(n);
     ll ans=0;
     int cnt=0,cnt1=0;
     for(ll i=0;i<n;i++){
         cin>>v[i];

         if(v[i]==1){
             cnt1++;
             ans+=(n-cnt1);
         }


         if(v[i]==2){
             cnt++;
         }
     }


    ans=ans+f(cnt-1);

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

