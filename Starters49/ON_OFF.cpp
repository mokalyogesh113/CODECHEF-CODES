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
    string s1, s2;
    int t1 = 0, t2 = 0;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        t1 ^= (s1[i] - '0');
        t2 ^= (s2[i] - '0');
    }
    if (t1 == t2)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
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
