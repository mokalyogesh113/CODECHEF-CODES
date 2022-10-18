#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int a,b;    cin>>a>>b;
    if(a>0 && b> 0) cout<<"Solution"<<endl;
    else if(a==0)    cout<<"Liquid"<<endl;
    else            cout<<"Solid"<<endl;    
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