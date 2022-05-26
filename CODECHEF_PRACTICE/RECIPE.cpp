#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
bool isdivisible(vi v,int n)
{
    for(int i:v)
        if(i%n!=0)
            return 0;
    return 1;
}
int ans(vi v)
{
    int n=v.size(),i;
    int min=*min_element(v.begin(),v.end());
    
    while(min!=1)
    {
        if(isdivisible(v,min))
            return min;
        min--;
    }
    return 1;
}

void solve()
{
    int n;  cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int min=ans(v);

    for(int i=0;i<n;i++)
        cout<<v[i]/min<<" ";
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