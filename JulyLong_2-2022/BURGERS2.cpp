// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int X, Y, N, R;
    cin >> X >> Y >> N >> R;

    if ((R / Y) >= N)
    {
        cout << 0 << " " << N << endl;
    }
    else if ((R / X) < N)
    {
        cout<<-1<<endl;
    }
    else{
        int G = Y*N;
        int F = X-Y;
        int M = (R-G)/F;
        if((R-G)%F!=0)
        {
            M++;
        }
        cout<<M<<" "<<N-M<<endl;
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
