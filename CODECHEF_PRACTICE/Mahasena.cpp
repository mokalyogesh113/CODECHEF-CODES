#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int temp;   cin>>temp;
        cnt+=temp%2==0 ? 1 :-1;
    }
    if(cnt>0)
        cout<<"READY FOR BATTLE";
    else
        cout<<"NOT READY";
}

int main()
{
    solve();

    return 0;    
}