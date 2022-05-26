#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,x;    cin>>n>>x;
    int max=x;
    for(int i=0;i<n;i++){
        int temp;   cin>>temp;
        x+=temp;
        if(x>max)   max=x;  
    }
    cout<<max<<endl;
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