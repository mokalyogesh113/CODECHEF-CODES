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
    ll n;
    cin >> n;
    vll v(n);
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            cnt++;
    }
    sort(all(v));
    for (ll i = 0; i < n; i++)
    {
        if (v[i] != 1 && v[i] % 2 == 0 && cnt > 0)
        {
            v[i]++;
            cnt--;
        }
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans * v[i]) % 998244353;
    }
    cout << ans << endl;
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

