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
    ll x,y;
    cin>>x>>y; 
    if(x%2 == 0){ 
        if((x+2) <= y) 
            cout << x << " " << x + 2; 
        else 
            cout<<-1; 
    } 
    else if(x%3==0){ 
        if((x+3)<=y) 
            cout<<x<<" "<<x + 3; 
        else 
            cout<<-1; 
    } 
    else { 
        if((x+3)<=y) 
            cout<<x+1<<" "<< x + 3; 
        else 
            cout<<-1; 
    } 
    cout<<endl; 


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