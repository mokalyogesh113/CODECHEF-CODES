// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool isConsonent(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 0;
    return 1;
}

bool isHardToPronounce(int n, string s)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isConsonent(s[i]))
        {
            cnt++;
            if (cnt >= 4)
            {
                return 1;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (isHardToPronounce(n, s))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
