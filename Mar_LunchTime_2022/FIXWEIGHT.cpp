#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    double x,y;    
    cin>>x>>y;
    for(double i=1;i<=x;i++)
    {
        double val=y/i;
        if(fmod(val,1.0)==0.00 && val<=(x+1-i))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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