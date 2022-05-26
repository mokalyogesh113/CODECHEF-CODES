#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll count(char s[],int n)
{
    ll cnt=0;
    for(ll i=0;i<n;i++)    
        if(s[i]=='0')
            cnt++;
    return cnt;
}
void solve()
{
    ll n;  cin>>n;
    char s[n];   cin>>s;
    int c0=count(s,n);
    if(!(n%2==0 && c0%2==1)|| c0==n-c0)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return;
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