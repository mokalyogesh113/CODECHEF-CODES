//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    double u,v,a,s;        cin>>u>>v>>a>>s;
    // if(u<=v){        cout<<"YES"<<endl;    return;   }

    double vt = (u*u) - (2*a*s);
    if(vt<=(v*v))       cout<<"YES"<<endl;
    else            cout<<"NO"<<endl;  

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

