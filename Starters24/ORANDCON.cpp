#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;   cin>>n;
    ll x=n,y=0,z=n;
    for (int i=0;i<31;i++)
    {
        if(!(z&((ll)1<<i)))
        {
            z=z | ((ll)1<<i);
            break;
        }
    }
    cout<<x<<" "<<y<<" "<<z<<endl;
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