#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int i,n,q;  cin>>i>>n>>q;
    int cnt=n/2;
    if(i==q)    cout<<cnt<<endl;
    else        cout<<n-cnt<<endl;
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        int n;  cin>>n;
        while(n--)  solve();
    }

    return 0;    
}