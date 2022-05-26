#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int T,k;
    cin>>T>>k;
    int cnt=0;
    while(T--)
    {
        int temp;   cin>>temp;
        if(temp%k==0)
            cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    solve();
    return 0;    
}