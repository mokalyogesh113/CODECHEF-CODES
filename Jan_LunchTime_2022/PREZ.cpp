#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;


bool check(ll mid, string& s, ll n, ll k)
{
    ll curr = 0;
    for(int i = mid-1; i >= 0; i--)
    {
        if(k < 0)
        {
            return false;
        }
        ll val = (ll) (s[i] - '0');
        val += curr;
        val %= 10;
        k -= (10-val)%10;
        curr += (10-val)%10;
        if(k < 0)
        {
            return false;
        }
    }
    return (k >= 0);
}

void solve()
{
    
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll start = 1, end = n, ans = 0;
        while(start <= end)
        {
            ll mid = start - (start - end)/2;
            if(check(mid, s, n, k))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        cout << ans << endl;
}
int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}