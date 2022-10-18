#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    int sum=0;
    vi v(n);
    for (int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }    
    int max=*max_element(v.begin(),v.end());    
    if(sum%max==0 && sum/max<=n)
        cout<<n-sum/max<<endl;
    if(n==2 && v[0]!=v[0+1])
        cout<<1<<endl; 
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}