#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    float x,a,b;    cin>>x>>a>>b;
    float y=(b*x)/a;
    float m=(x+(sqrt(x*x-4*y)))*0.5,n=(x-(sqrt(x*x-4*y)))*0.5;
    if(m+n == x)
        cout<<m*n;
    else
        cout<<-1<<endl;
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