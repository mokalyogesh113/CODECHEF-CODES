// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        return 1;
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(f(s[i]))
        {
            reverse(s.begin(),s.begin()+i);
        }
    }
    cout<<s<<endl;
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
