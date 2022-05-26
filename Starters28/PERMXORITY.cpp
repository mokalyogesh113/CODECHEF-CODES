#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    if(n==1 || n==2){
        cout<<-1<<endl;
        return;
    }
    if(n%2){
        for(ll i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
    }    
    else{
        cout<<2<<" "<<3<<" "<<1<<" "<<4<<" ";
        for(ll i=5;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

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