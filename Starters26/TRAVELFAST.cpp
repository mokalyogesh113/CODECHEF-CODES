#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int a,b;    cin>>a>>b;
    if(a<b) cout<<"BIKE"<<endl;
    else if(b<a)    cout<<"CAR"<<endl;
    else cout<<"SAME"<<endl;
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