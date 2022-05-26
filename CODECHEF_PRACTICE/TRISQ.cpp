#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;
    }
    return ans;
}

void solve()
{
    int B;  cin>>B;
    int n=(B-2)/2;
    cout<<sum(n)<<endl;
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