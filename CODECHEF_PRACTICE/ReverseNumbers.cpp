#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    int ans=0;
    while(n)
    {
        int temp=n%10;
        ans=(ans*10)+temp;
        n/=10;
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