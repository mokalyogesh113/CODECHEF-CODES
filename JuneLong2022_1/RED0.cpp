// Code By @trickymindme
#include <bits/stdc++.h>
#define ll unsigned long long
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    size_t a, b;

    cin >> a >> b;
    if (a == b)
    {
        cout << a << endl;
        return;
    }
    else if (a == 0 || b == 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        ll cnt = 0;
        if (a > b)
        {
            unsigned long long t = a;
            a = b;
            b = t;
        }

        while (a < b)
        {
            a *= 2;
            cnt++;
        }
        if (a >= b)
        {
            a /= 2;
            cnt--;
        }

        ll temp = a - (b - a);

        a -= temp;
        b -= temp;
        cnt += temp;

        a *= 2;
        cnt++;

        cnt += b;
        cout << cnt << endl;
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
