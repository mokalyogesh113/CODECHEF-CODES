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
 
long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll n,k; cin>>n>>k;
    cout<<lcm(n,k)/k<<endl;    
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

