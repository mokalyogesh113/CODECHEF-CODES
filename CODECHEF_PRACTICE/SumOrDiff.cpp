#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int solve()
{
    int n1,n2;  cin>>n1>>n2;
    if(n1>n2)   return n1-n2;
    return n1+n2;
}

int main()
{
    cout<<solve();

    return 0;    
}