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
    vi v(n);
    
    map<int,int> mp;
    for(auto &i:v){
        cin>>i; 
    mp[i]++;
    }
    vi v2;
    for(auto &i:mp){
        v2.push_back(i.second);
    }
    sort(v2.begin(),v2.end());
    
    int Max = *(v2.end()-1);
    if(Max%2){
        Max = Max/2+1;
    }
    else{
        Max/=2;
    }
    
    int secondMax = v2.size()!=1 ? *(v2.end()-2) : 0;

    int ans = max(secondMax , Max);
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

