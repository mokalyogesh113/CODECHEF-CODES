#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==1 || n==0)
        return 0;
        
    for(int i=2;i<sqrt(n) ;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;  cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(isPrime(x))
            cout<<x<<endl;
    }
}