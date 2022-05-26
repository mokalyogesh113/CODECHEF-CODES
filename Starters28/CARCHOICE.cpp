#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    float x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    float a1=y1/x1,a2=y2/x2;
    if(a1<a2)   cout<<-1;
    else if(a1>a2)  cout<<1;
    else            cout<<0;
    cout<<endl;           
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