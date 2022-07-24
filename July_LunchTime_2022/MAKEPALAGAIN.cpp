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
    string s;
    cin >> s;
    vector<pair<int, int>> cnt(256, make_pair(0, 0));
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            cnt[s[i]].first++;
        }
        else{
            cnt[s[i]].second++;
        }
    }
    bool flag = 1;
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i].first!=cnt[i].second)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
