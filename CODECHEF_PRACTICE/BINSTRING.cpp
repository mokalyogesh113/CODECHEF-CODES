#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1])    
        ans++;
    }
    cout<<ans<<endl;    
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