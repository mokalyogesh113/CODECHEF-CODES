// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                if (i % 2 != 1 || j % 2 != 1)
                {
                    cnt++;
                }
            }
        }
    }
    if(cnt){
        cout<<"Improper Placement"<<endl<<cnt<<endl;   
    }
    else{
        cout<<"Proper Placement"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    // cin>>T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;
}
