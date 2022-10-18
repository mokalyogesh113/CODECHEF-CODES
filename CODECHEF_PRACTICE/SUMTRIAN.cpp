#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
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
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}