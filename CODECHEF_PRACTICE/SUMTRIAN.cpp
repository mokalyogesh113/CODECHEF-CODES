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
    int n;  cin>>n;
    int v[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<i+1;j++)
            cin>>v[i][j];

    int ans[n][n];
    for(j=0;j<n;j++)
        ans[n-1][j]=v[n-1][j];
    
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<i+1;j++)
        {
            ans[i][j]=v[i][j]+max(ans[i+1][j],ans[i+1][j+1]);
        }
    }

    cout<<ans[0][0]<<endl;
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

