#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,ans;  cin>>n;
    if(n%10==0)
        ans=0;
    else if(n%5==0)
        ans=1;
    else    ans=-1;
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