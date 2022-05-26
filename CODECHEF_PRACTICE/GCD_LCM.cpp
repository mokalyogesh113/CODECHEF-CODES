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
    int A,B;    cin>>A>>B;
    cout<<gcd(A,B)<<" "<<lcm(A,B)<<endl;
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