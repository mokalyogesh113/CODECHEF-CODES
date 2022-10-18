#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int l,b;    cin>>l>>b;
    if(l*b > 2*(l+b))   cout<<"Area\n"<<l*b<<endl;
    else if (l*b < 2*(l+b)) cout<<"Peri\n"<<2*(l+b)<<endl;
    else    cout<<"Eq\n"<<l*b<<endl;
    return ;    
}

int main()
{
    solve();
    return 0;    
}