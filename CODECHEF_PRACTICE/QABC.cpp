#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vi v1(n),v2(n);
    for(int i=0;i<n;i++)    cin>>v1[i];
    for(int i=0;i<n;i++)    cin>>v2[i];    
    bool flag=1;
    for(int i=0;i<n-2;i++)
    {
        int d=v2[i]-v1[i];
        if(d<0){
            flag=0; break;
        }
        v1[i]+=d*1;
        v1[i+1]+=d*2;
        v1[i+2]+=d*3;
    }
    if(v1[n-2] != v2[n-2]  || v1[n-1] != v2[n-1] )  flag=0;
    if(flag)    cout<<"TAK"<<endl;
    else        cout<<"NIE"<<endl;

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