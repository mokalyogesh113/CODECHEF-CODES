#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    vi v(4);
    for(int i=0;i<4;i++)
        cin>>v[i];
    
    sort(v.begin(),v.end());

    if(v[0]==v[1] && v[2]==v[3])    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return;
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