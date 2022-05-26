#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int f(int n)
{
    int ans=0;
    int i=0;
    while(ans<=n)
    {
        ans+=i;
        i++;
    }
    return i-2;
}
void solve()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;    
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