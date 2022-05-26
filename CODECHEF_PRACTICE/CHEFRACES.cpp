//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int a,b,c,d;    cin>>a>>b>>c>>d;
    int ans=2;
    if(a==c) {
        if(b==d)
            ans--;
        ans--;
    }
    else if(b==d){
        ans--;
    }
    else if(a==d){
        if(b==c)
            ans--;
        ans--;
    }
    else if(b==c){
        ans--;
    }
    cout<<ans<<endl;
}

int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}