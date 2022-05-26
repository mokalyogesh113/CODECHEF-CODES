#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,x,y;  cin>>n>>x>>y;
    vi a(n),b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        if(b[i]-a[i]!=x && b[i]-a[i] !=y)
        {
            flag=0;
            break;
        }
    }
    if(flag)    cout<<"YES"<<endl;
    else        cout<<"NO"<<endl;

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