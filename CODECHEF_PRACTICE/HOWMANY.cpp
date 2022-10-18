#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int ans=s.length();
    if(ans<=3)  cout<<ans<<endl;
    else        cout<<"More than 3 digits"<<endl;
}

int main()
{
    int T=1;  
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}