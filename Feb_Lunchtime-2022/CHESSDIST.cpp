#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int x1,x2,y1,y2;    cin>>x1>>y1>>x2>>y2;
    cout<<max(abs(x1-x2),abs(y1-y2))<<endl;;    
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