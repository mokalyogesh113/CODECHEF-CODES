#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        if(x<=n)    s.insert(x);
    }
    cout<<n-s.size()<<endl;
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