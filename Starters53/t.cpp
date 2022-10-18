#include <bits/stdc++.h> 
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int s0 = 0;
    int s1 = 0;
    int s = 0;
    vi a(10001)
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s0 += a[i] == 0;
        s1 += a[i] == 1;
    }
    for (int i = 0; i < n; ++i)
    {
        if (i == 1)
            s += (a[1] == a[n]);
        else
            s += a[i] == a[i - 1];
    }
    s -= abs(s0 - s1);
    cout << (s % 4 == 0 ? "Bob" : "Alice") << endl;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
}
