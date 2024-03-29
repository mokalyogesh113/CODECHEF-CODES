// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    if (n > x)
    {
        cout << -1 << endl;
        return;
    }
    int temp = x - n + 1;
    cout << temp << " ";
    for (int i = 1; i <= n; i++)
    {
        if (temp == i)
            continue;
        cout << i << " ";
    }
    cout << endl;
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
