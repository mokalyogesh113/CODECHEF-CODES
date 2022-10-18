#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<endl;
}

int main()
{
    solve();
    return 0;    
}