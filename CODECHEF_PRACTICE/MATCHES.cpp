#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
int arr[]={6,2,5,5,4,5,6,3,7,6};
void solve()
{
    
    ll a,b;    cin>>a>>b;
    a+=b;
    ll cnt=0;
    while(a){
        cnt+=arr[a%10]; 
        a/=10;
    }
    cout<<cnt<<endl;    
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