#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,t;
    cin>>n>>t;
    vi v(n);
    iota(v.begin(),v.end(),1);
    int temp=0;
    for(int i=0;i<t;i++)
    {
        int x;  cin>>x;
        reverse(v.begin()+temp,v.begin()+x);
        temp=x;
    }
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
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