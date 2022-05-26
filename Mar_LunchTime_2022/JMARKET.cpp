#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    vi v(3);
    for(int i=0;i<3;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int ans=(v[0]*(x-1) + v[1]);
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