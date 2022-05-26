#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,m,k;  cin>>n>>m>>k;
    int ans=min(m,n)-max(m,n)+k;
    ans=ans<0 ? ans*-1 : 0;
    cout<<ans<<endl;
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