#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int reverse(int x)
{
    int ans=0;
    while(x!=0)
    {
        int temp=x%10;
        ans=(ans*10)+temp;
        x=x/10;
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    if(reverse(n)==n)
        cout<<"wins"<<endl;
    else    cout<<"loses"<<endl;
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