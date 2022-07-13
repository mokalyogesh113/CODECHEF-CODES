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
    if (A > B && A > C)
    {
        cout << "ALICE" << endl;
    }
    else if (B > C)
    {
        cout << "BOB" << endl;
    }
    else
    {
        cout << "CHARLIE" << endl;
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
