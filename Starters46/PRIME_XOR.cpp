// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

vi f(int x, int y)
{

    vi v(3);

    v[0] = 2;
    v[1] = 2 ^ x;
    v[2] = v[1] ^ y;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] % 2 == 0)
            cnt++;
    }
    if (cnt == 1)
        return v;

    v[1] = 2;
    v[0] = v[1] ^ x;
    v[2] = v[1] ^ y;
    cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i] % 2 == 0)
            cnt++;
    }
    if (cnt == 1)
        return v;

    v[2] = 2;
    v[1] = v[2] ^ y;
    v[0] = v[1] ^ x;
   
    return v;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    vi v = f(x, y);
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";
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
