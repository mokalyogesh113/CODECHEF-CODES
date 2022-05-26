#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll flip(ll n){
    ll no = 0,cnt = 0;
    while(n){
        if(n%2 == 0) no += (1LL<<cnt);
        n /= 2,cnt++;
        if(n <= 0) break;
    }
    return no;
}

void solve()
{
    ll n; cin>>n;
        ll ans = 0;
        while(n > 0)
        {
            ll a = flip(n);
            ll b = n;
            if((b&(b+1)) == 0) b--;
            ll val = ((b * (b+1)) / 2) - ((a * (a-1)) / 2);
            ans += (val*2);
            n = a-1;
        }
        cout<<ans<<"\n";
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