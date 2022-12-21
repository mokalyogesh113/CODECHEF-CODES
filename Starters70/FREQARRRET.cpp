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
    int n;
    cin>>n;
    vi v(n,0);
    ll sum = 0;
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    bool flag = false;
    for(auto i:freq)
    {
        if(i.second%i.first==0)
        {
            sum+=(i.second/i.first);
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<-1<<endl;
        return;
    }
    map<int,int> mp,mp1;
    int cnt = 1;
    for(int i=0;i<n;i++)
    {
        if(mp[v[i]]==0)
        {
            mp[v[i]] = v[i]-1;
            mp1[v[i]] = cnt;
            cnt++;
            cout<<mp1[v[i]]<<" ";
        }
        else
        {
            mp[v[i]]-=1;
            cout<<mp1[v[i]]<<" ";
        }
    }
    cout<<endl;

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

    // cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}