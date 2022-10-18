//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(int a,int b)
{
    if((a>0 && b<0 ) || (a<0 && b>0))
        return 1;
    return 0;
}

void solve()
{
    ll n;  cin>>n;
    vll v(n),v1(n,1);
    for(auto &i:v)
        cin>>i;
    for(int i=n-2;i>=0;i--){
        if(f(v[i],v[i+1]))
            v1[i]=v1[i+1]+1;
    }
    for(auto i:v1)
        cout<<i<<" ";
    cout<<endl;
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

