#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int dif(char a,char b)
{
    int ans;
    ans=b-a;
    
    return ans;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    string a,b; cin>>a>>b;
    for(int i=0;i<q;i++)
    {
        int l,r;    cin>>l>>r;
        if(l==r) {cout<<"Yes"<<endl; continue; }
        int dif=dif(a[l-1],b[l-1]);
        for(int i=l;i<r-1;i++)
        {
            
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