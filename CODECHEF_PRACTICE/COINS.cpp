//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

ll f1(ll n)
{
    if(n<12)
        return n;
    
    ll n1 = f1(n/2);
    ll n2 = f1(n/3);
    ll n3 = f1(n/4);
    return n1+n2+n3;
}

void solve()
{
    ll n;
    while(cin>>n)
    {
            cout<<f1(n)<<endl;
    }
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    // cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

