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
    int n,k;
    cin>>n>>k;
    int sum = (k*(k+1))/2;
    if(sum<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

