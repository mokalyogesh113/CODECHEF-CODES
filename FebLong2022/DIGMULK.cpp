#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define Max 1000000000
using namespace std;

char* f1(char s[],int k)
{
    char ans[Max]="";
    for(int i=0;s[i]!='\0';i++)
    {
        char t=s[i];
        char* temp=__int_to_char((t-'0')*k);
        strcat(ans,temp);
    }
    //cout<<ans<<endl;
    return ans;
}

ll f(int n,int m,int k,char s[])
{
    if(stoi(s)==0)  return 1;

    for(int i=0;i<m;i++)
    {
        s=f1(s,k);
    }
    return s.length();
}

void solve()
{
    int n,k,m;  cin>>n>>k>>m;
    char s[Max];   cin>>s;
    ll ans=f(n,m,k,s);   
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