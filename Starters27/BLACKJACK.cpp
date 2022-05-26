#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int a,b;    cin>>a>>b;
    int ans=21-(a+b);
    if(ans>=1&& ans<=10) cout<<ans<<endl;
    else    cout<<-1<<endl;
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