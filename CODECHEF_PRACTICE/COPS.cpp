#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int M,x,y;      cin>>M>>x>>y;
    vi v(101,0);
    for(int i=0;i<M;i++){
        int n;  cin>>n;
        for(int j=max(n-(x*y),1);j<=min(n+(x*y),100);j++)
            v[j]=1;
    }

    cout<<count(v.begin(),v.end(),0)-1<<endl;
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