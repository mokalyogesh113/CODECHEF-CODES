//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    for(int &i:v)
        cin>>i;
    
    sort(v.begin(),v.end());
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        if(v[i]!=x) flag=0;
    }
    if(flag)       cout<<"yes"<<endl;
    else            cout<<"no"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

