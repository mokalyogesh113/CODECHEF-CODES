//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string ans;
    int n;
    cin>>n;
    if(n%3==0){
        ans="NORMAL";
    }
    else if (n%3==1){
        ans="HUGE";
    }
    else {
        ans="SMALL";
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

