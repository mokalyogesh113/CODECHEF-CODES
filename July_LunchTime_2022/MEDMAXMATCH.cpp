// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vi v1(n), v2(n), ans(n);
    for (int &i : v1)
    {
        cin >> i;
    }
    sort(v1.begin(), v1.end());

    for (int &i : v2)
    {
        cin >> i;
    }
    sort(v2.begin(), v2.end());
    reverse(v2.begin() + n / 2, v2.end());
    for (int i = 0; i < n; i++)
    {
        ans[i] = v1[i] + v2[i];
    }
    sort(ans.begin(),ans.end());
    cout<<ans[n/2]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;
}
