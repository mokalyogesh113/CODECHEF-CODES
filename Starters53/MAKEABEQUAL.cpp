//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

void solve()
{
    ll n;  cin>>n;
    vll v1(n), v2(n) , diff(n);
    ll sum1 = 0 , sum2 =0 , sum3 = 0;
    for(ll i = 0; i<n;i++)
    {
        cin>>v1[i];
        sum1+=v1[i];
    }    
    for(ll i = 0; i < n ; i++)
    {
        cin>>v2[i];
        sum2 += v2[i];
        diff[i] = abs(v2[i] - v1[i]);
        sum3 += diff[i];
    }

    if(sum1 == sum2)
    {
        cout<<(sum3/2)<<endl; 
    }
    else{
        cout<<-1<<endl;
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

