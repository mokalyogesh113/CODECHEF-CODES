#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int x,a,b;
    cin>>x>>a>>b;
    int ans=a+(b*2);
    if(ans>=x)  cout<<"Qualify"<<endl;
    else        cout<<"NotQualify"<<endl;
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