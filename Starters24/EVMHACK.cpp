#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    float half=(p+q+r)/2;
    int sum=a+b+c;
    if(sum-a+p > half   ||  sum-b+q > half  || sum-c+r>half)
        cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;


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