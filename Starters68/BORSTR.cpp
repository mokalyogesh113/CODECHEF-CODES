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
    string s;
    cin >> n >> s;
    map<pair<char, int>, int> mp;
    char current = s[0];
    int n1 = 1;
    mp[{current, n1}]++;
    for (int i = 1; i < n; i++)
    {
        if (current != s[i])
        {
            n1 = 1;
            current = s[i];
        }
        else
            n1++;
        mp[{current, n1}]++;
    }

    int ans = 0;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            ans = max(ans, it.first.second - 1);
            continue;
        }
        ans = max(ans, it.first.second);
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

