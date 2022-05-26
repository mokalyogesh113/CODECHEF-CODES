#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    int b=((n/100)+(n%100==0 ? 0 :1));
    int ans=b*x;
    for(int i=b;i>=0;i--)
    {
        int rem=n-(i*100);
        int c= rem<=0 ? 0 : (rem/4) +(rem%4==0 ? 0 : 1 );
        ans=min(ans,i*x + c*y);
    }
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