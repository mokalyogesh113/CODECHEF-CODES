#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

ll gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


void solve()
{
    int a,b;    cin>>a>>b;
    cout<<lcm(a,b)/a<<endl;
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