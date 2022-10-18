#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool ispalin(string s,int n)
{

    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
            return 0;
    }
    return 1;
}


void solve()
{
    int n;
    string s;
    cin>>n>>s;
    if(ispalin(s,n))
    {
        sort(s.begin(),s.end());
        if(ispalin(s,n))
            cout<<"NO"<<endl;
        else
            cout<<"YES\n"<<s<<endl;
    }
    else
        cout<<"NO"<<endl;
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