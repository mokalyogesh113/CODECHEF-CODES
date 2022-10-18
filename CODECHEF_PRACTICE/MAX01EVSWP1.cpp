//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    int ce1=0,ce0=0,co1=0,co0=0,c1=0,c0=0;
    for(int i=0;i<n;i++){
        if(i%2)
            if(s[i]=='1')   co1++;
            else            co0++;
        else
            if(s[i]=='1')   ce1++;
            else            ce0++;
    }
    c1=co1+ce1;
    c0=co0+ce0;

    int ans=0;
    if(n%2) n-=1;

    bool flag1=1,flag2=1;

    for(int i=0;i<=n-2;i+=2){
        if(s[i]!='0' || s[i+1]!='1')
            flag1=0;
        if(s[i]!='1' || s[i+1]!='0')
            flag2=0;
    }
    if(flag1 || (flag2 && s[n]=='1'))
    {
        cout<<n/2<<endl;
        return;
    }

    if(c1==c0)
        ans=c1-1;
    if(c1<c0)
        ans=c1;
    if(c1>c0)
        ans=c0;

    cout<<ans<<endl;



}

int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}