#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll a,b,c;  cin>>a>>b>>c;
    if(a>b && a>c)  cout<<a<<endl;
    else if(b>c)    cout<<b<<endl;
    else            cout<<c<<endl;
    
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