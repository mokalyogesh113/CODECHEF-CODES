#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool isprime(long int n)
{
    if (n==1)   return 0;
    
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    
    return 1;
}

void solve()
{
    long int n;  cin>>n;
    if(isprime(n))  cout<<"yes"<<endl;
    else            cout<<"no"<<endl;
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