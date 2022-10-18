#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int f(int n)
{
    return round(pow(0.143*n,n)) ;
}


void solve()
{
    int n;  cin>>n;
    cout<<f(n)<<endl;    
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