//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vi  v(n);
    int cnt = 0;
    ll ans =0;
    for(int &i:v){
        cin>>i;
        if(i==1){
            cnt++;
            ans+=cnt;
        }
        else{
            cnt = 0;
        }
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

