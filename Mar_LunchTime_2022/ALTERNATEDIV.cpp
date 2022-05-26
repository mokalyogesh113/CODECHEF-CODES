#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
            cout<<i<<" ";
        else
            cout<<(i-1)*2<<" ";
    }    
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