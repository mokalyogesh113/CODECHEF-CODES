#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
 const ll M=1e9+7;
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    vll v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    for(int i=0;i<m;i++){
        ll c,x; cin>>c>>x;
        vll v1(2*x);

        for(int j=0;j<2*x;j++) cin>>v1[j];
        ll temp=v[c-1];
        v[c-1]=0;
        
        for(int j=0;j<v1.size();j+=2)
            v[v1[j+1]-1]=(v[v1[j+1]-1]+(temp*v1[j]))%M;
    }    


    for(int x:v)    cout<<x<<endl;

    return;
}

int main()
{
    solve();

    return 0;    
}