#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    switch(n)
    {
        case 2010:
        case 2015:
        case 2016:
        case 2017:
        case 2019:
            cout<<"HOSTED\n";
        break;
        default:
            cout<<"NOT HOSTED\n";
        break;
    }    
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