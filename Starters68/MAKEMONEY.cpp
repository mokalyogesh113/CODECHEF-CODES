//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

void solve()
{
    ll n,x,c;
    cin>>n>>x>>c;
    vll v(n);
    scanArray(v);
    int diff = x - c;
    sort(all(v));
    ll sum1 = 0 , sum2 = 0;
    for(auto &i:v)
    {
        if(i<diff)
        {
            i= x;
            sum2+=c;
        }
        sum1+=i;
    }
    cout<<sum1-sum2<<endl;

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

