//Code By @trickymindme
#include<bits/stdc++.h>
// #define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int c,y,x;
    cin>>c>>x>>y;
    int res = max(0,c-x)*y;
    cout<<res<<endl;
}

int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}