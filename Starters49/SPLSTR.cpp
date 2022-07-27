//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n,k;
    cin >> n>>k;
    string s;
    cin >> s;
    ll c1 = count(s.begin(), s.end(),'1');
    ll c0 = n - c1;

    if(c1==c0){
        cout<<0<<endl;
        return;
    }
    
    ll diff = abs(c0-c1);
    if(diff%k){
        cout<<(diff/k)+1;
    }
    else{
        cout<<diff/k;
    }
    cout<<endl;
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

