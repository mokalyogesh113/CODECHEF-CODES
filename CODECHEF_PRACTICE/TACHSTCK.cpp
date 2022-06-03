//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,d;     cin>>n>>d;
    vll v(n);
    for(ll &i:v){
        cin>>i;
    }
    sort(v.begin(),v.end());
    ll count =0;
    for(ll i=0;i<n-1;i++)
    {
        if(v[i+1]-v[i] <=d )  {
            count++;
            i++;
        }
    }

    cout<<count<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    // cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

