// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(), (c).end()
#define scanArray(v)  \
    for (auto &i : v) \
        cin >> i;
#define printArray(v)     \
    for (auto &i : v)     \
        cout << i << " "; \
    cout << endl;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int s0 = 0, s1 = 0, s = 0;
    vi a(n);
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i]==0)
            s0++;
        else
            s1++;
    }
    for (int i = 0 ; i < n ; i++)
    {
        if (i == 1)
            s += (a[1] == a[n]);
        else
            s += a[i] == a[i - 1];
    }
    s -= abs(s0 - s1);
    if (s % 4 == 0 )
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }
    cout << (s % 4 == 0 ? "    Bob" : "    Alice") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T = 1;
    cin >> T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " mS\n";
    return 0;
}
