#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k;   cin>>n>>k;
    vi v(n),dp(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    dp[n-1]=v[n-1];
    int i;
    for(i=n-2;i>=n-k-1;i--)
    {
        dp[i]=dp[n-1]*v[i];
    }
    for(i;i>=0;i++)
    {
       
        dp[i]=v[i]* *(__min_element(v.begin()+i+1,v.begin()+i+1+k));

    }


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