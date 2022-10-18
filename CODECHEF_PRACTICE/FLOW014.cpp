#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    float h,c,t;    cin>>h>>c>>t;
    vi v(3,0);
    v[0]+=  h>50  ? 1 : 0;
    v[1]+=  c<0.7 ? 1 : 0;
    v[2]+=  t>5600? 1 : 0;
    int ans;
    if(v[0] == 1 && v[1] ==1 && v[2]==1)
        ans=10;
    else if(v[0]==1 && v[1]==1) ans=9;
    else if(v[1]==1 && v[2]==1) ans=8;
    else if(v[0]==1 && v[2]==1) ans=7;
    else if(v[0] == 1 || v[1] ==1 || v[2]==1)   ans=6;
    else    ans=5;

    cout<<ans<<endl;
   
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