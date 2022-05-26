#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n=3;  vi v(n);  int d,e;
    cin>>v[0]>>v[1]>>v[2]>>d>>e;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<n;i++)    sum+=v[i];
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=e && (sum-v[i])<=d){
            flag=1;
            break;
        }
    }
    if(flag)    cout<<"YES"<<endl  ;
    else        cout<<"NO"<<endl;
    
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
