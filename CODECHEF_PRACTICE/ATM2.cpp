#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,m;    cin>>n>>m;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>m) cout<<0;
        else{
            cout<<1;
            m-=x;
        }
    }    
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