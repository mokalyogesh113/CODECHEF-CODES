//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f1(vll a, ll Mid, ll n)
{

    ll temp = 0;
    for (int i = 0; i < Mid; i++)
        temp += a[i];

    ll mx = 0;
    for (int i = Mid; i < n; i++)
        mx = max(a[i], mx);

    ll lele = 0;
    for (int i = Mid; i < n; i++)
        lele += abs(a[i] - mx);

    if (temp >= lele)
        return true;

    return false;
}

ll f(vll v)
{
    int n = v.size();
    ll Low = 0, High = n;
    ll ans = 0;
    while (High >= Low)
    {
        ll Mid = (Low + High) / 2;
        if (f1(v, Mid, n))
        {
            High = Mid - 1;
            ans = Mid;
        }
        else
        {
            Low = Mid + 1;
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());

    ll ans1 = f(v);
    reverse(v.begin(), v.end());
    ll ans2 = f(v);
    cout << min(ans1, ans2)<<endl;
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

