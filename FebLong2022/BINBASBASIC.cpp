#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int f(string s,int n,int k)
{
    int cnt=0;
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i])
            cnt++;
    int dif=k-cnt;
    if(dif>=0 && (dif%2==0 || n%2==1))
        return 1;
    return 0;
}

void solve()
{
    int n,k;    cin>>n>>k;
    string s;   cin>>s;
    if(f(s,n,k))     cout<<"YES\n";
    else            cout<<"NO\n";

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