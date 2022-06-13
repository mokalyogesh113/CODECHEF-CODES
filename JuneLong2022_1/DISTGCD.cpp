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
    ll a,b; cin>>a>>b;
    ll diff = abs(a-b);
    ll cnt = 0;
    for(int i=1;i<sqrt(diff);i++){
        if(diff%i == 0) cnt+=2;
    }
    if((int)sqrt(diff)*(int)sqrt(diff) == diff) cnt++;
    cout<<cnt<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

