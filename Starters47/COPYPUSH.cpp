// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(string s, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 1)
    {
        return f(s.substr(0, n - 1), n - 1);
    }
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2, n / 2);
    if (s1 == s2)
    {
        return f(s1, n / 2);
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (f(s, n))
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
