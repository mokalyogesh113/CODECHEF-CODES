#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[0]+v[1]<<endl;
    return; 
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