#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,cnt=0;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0) cnt++;
    }
    cout<<max(cnt,n-cnt)<<endl;
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