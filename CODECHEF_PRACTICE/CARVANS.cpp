#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    int min=INT32_MAX;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<=min)
        {
            min=v[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
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