#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int count(vi v)
{   int cnt=0;
    for (int x:v)
        if(x%2==0)
            cnt++;
    return cnt;
}
void solve()
{
    int n;  cin>>n;
    vi v(2*n);
    for(int i=0;i<2*n;i++)
        cin>>v[i];
    int even=count(v);
    if(even%2==0)   cout<<"YES"<<endl;
    else            cout<<"NO"<<endl;    
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