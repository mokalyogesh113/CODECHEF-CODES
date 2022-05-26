#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);

    int val=1;
    int i;
    for(i=0;i<((n+1)/2);i+=2)
    {
        v[i]=val;
        v[i+1]=val+1;
        v[n-1-i]=val+2;
        v[n-2-i]=val+3;
        val+=4;
    }
    

    for(int x:v)
        cout<<x<<" ";
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