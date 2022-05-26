#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k,x;      cin>>n>>k>>x;
    if(k<x)
    {
        cout<<"-1"<<endl;
        return ;
    }
    vi v(n);
    int temp=0;
    for(int i=0;i<n;i++)
    {
        v[i]=temp;
        temp=(temp+1)%x;
    }
    for(int i:v)
        cout<<v[i]<<" ";
    cout<<endl;
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