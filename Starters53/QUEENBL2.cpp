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
    int x, y;
    cin >> x >> y;
    x--, y--;
    vector<vi> v(8, vector<int>(8, 0));
    v[x][y] = 1;
    
    if(y>2 && y<6){
      v[x+1][y+2]=2;
      v[x+1][y-2]=2;
      v[x-1][y+2]=2;
      v[x-1][y-2]=2;
    }
    else if(y<=2){
      v[x+1][y+2]=2;
      v[x-1][y+2]=2;
    }
    else if(y>=6){
      v[x+1][y-2]=2;
      v[x-1][y-2]=2;
    }   

    for (auto i : v)
    {
        for (auto j : i)
            cout << j<<" ";
        cout << endl;
    }
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

    // cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " mS\n";
    return 0;
}
