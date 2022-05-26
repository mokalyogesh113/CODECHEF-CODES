#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll frequency(string s)
{
    ll cnt=0;
    for(char x:s)
    {
        if(x=='1')
            cnt++;
    }
    return cnt;
}

void solve()
{
    ll n,x;    cin>>n>>x;
    char s[n];   cin>>s;
    char check[n]="";
    for(ll i=0;i<x;i++)
        strcat(check,"0");

    ll cnt=0;
    ll flag=1;
    for(int i=0;i<=(n-x);i++)
    {
        if(s.substr(i,x)==check){
            cnt+=1;
            i++;    
        }
        else if(frequency(s.substr(i,x))==1 && flag==1)
        {
            cnt++;
            flag=0;
            i++;
        }

    }
    cout<<cnt<<endl;
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


