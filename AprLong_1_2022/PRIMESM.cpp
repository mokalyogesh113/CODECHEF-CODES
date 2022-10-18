//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

long long int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve()
{
    unsigned ll a,b;    cin>>a>>b;
    if(a==1 || b==-1){
        cout<<-1<<endl;
        return;
    }

    if(gcd(a,b)!=1) cout<<0<<endl;
    else            cout<<1<<endl;
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