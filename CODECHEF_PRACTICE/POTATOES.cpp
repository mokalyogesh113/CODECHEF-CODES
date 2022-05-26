#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool isprime(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)  return 0;
    return 1;
}
int f(int n)
{
    int i=1;
    while(true)
    {
        if(isprime(n+i)){
            return i;
        }
        i++;
    }
    return 0;
}


void solve()
{
    int x,y;  cin>>x>>y;
    cout<<f(x+y)<<endl;;
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