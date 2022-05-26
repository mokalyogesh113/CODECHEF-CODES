#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,x;  cin>>n>>x;
    vi v(n);    for(int i=0;i<n;i++)    cin>>v[i];
    int ans=1,max=*max_element(v.begin(),v.end());
    bool flag=1;
    for(int i=2;i<max;i++)
    {
        for(int j:v)
        {
            if(j%i >0 && j%i<)
        }
    }

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