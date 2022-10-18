#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k;    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        if((x+k)%7 ==0)     cnt++;  
    }
    cout<<cnt<<endl;
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