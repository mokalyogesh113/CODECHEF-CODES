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
    return n*(n+1)/2;
}

void solve()
{
    ll n;
    cin>>n;
    vll v(n);
    unsigned ll ans = 0;
    ll cnt = 0;

    

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(i>0)
        {
            if(v[i]<v[i-1])
            {   
            ans+= f1(cnt);
            cnt = 0;  
            }
        }
        cnt++;
    }
    ans+=f1(cnt);

    cout<<ans<<endl;
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

