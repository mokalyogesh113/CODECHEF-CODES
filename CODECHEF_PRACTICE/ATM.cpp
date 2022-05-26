#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int w;
    float d;
    cin>>w;
    cin>>d;
    if(w%5==0 && w<d){
        float ans=d-((float)w+0.5);
       cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    else  
        cout<<fixed<<setprecision(2)<<d<<endl;
}
int main()
{
    solve();

    return 0;    
}