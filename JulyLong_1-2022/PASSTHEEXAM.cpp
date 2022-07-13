// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B + C >= 100 && A >= 10 && B >= 10 && C >= 10)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
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
