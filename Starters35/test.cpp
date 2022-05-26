//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll k;  cin>>k;
    ll count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((((v[i]^v[j])&k )==0 ) && (1<=i<=n && 1<=j<=n)){
                count++;
            }
        }
    }
    cout<<count<<endl;


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

