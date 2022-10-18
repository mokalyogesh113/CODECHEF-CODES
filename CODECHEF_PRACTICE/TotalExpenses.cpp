#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int q,p;    cin>>q>>p;
    double ans=q*p;
    if(q>1000)
        ans-=(0.1 * ans);
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return;
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