#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll o1,o2,e1,e2;
    o1=(a+1)/2;
    o2=(b+1)/2;
    e1=a/2;
    e2=b/2;

    ll ans=(o1*o2)+(e1*e2);
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