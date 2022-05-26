#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k;  cin>>n>>k;
    int ans=0;
    for(int i=2;i<=k;i++)
    {
        int temp=n%i;
        if(temp>ans)
            ans=temp;
    }
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