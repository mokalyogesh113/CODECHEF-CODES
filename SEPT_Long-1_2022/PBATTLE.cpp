//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

class pokemon 
{
    public:
    ll id;
    ll a, b;
};

void bubbleSort(vector<pair<ll,ll>> &v)
{
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(v[j].first < v[j+1].first)
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}




void solve()
{
    int n; 
    cin>>n;


    vector<pair<ll,ll>> p1(n),p2(n);  
    for(ll i=0;i<n;i++)
    {
        cin>>p1[i].first;
        p1[i].second = i;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>p2[i].first;
        p1[i].second = i;
    }

    bubbleSort(p1);
    bubbleSort(p2);
    
    
    vll v(n,0);
    ll cnt =0;
    for(auto i:p1)
    {
        v[i.second] += cnt;
        cnt++;
    }

    cnt = 0;
    for(auto i:p2)
    {
        v[i.second] += cnt;
        cnt++;
    }

    ll max = *(max_element(all(v)));
    ll ans = count(all(v) , max);

    cout<<ans<<endl;

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

