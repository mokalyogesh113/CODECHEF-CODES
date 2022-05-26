#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int maxmink(vi v, int x, int k)
{
    int sum=0;
    for(int i=x;i<x+k ; i++)
        sum+=v[i];
    return sum; 
   
}

void solve()
{
    int n,k;    cin>>n>>k;
    vi a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];

    int ans=0;
    for(int i=0;i<n-k;i++)
    {
        int temp=min(maxmink(a,i,k),maxmink(b,i,k));
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