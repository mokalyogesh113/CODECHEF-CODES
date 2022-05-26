#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n, k;cin >> n >> k;
    vi v(n);
    for(int i=0;i<n;i++)
        v[i]=i+1;
    if (n == 1){
        cout << 1 << endl;
        return;
    }
    if (k == n - 1)
    {
        swap(v[0], v[1]);
        for (int e : v)
        {
            cout << e << " ";
        }
        cout << endl;return;
    }
    int sw = 0;
    k = n - k;
    while (k--){
        swap(v[sw], v[sw + 1]);
        sw++;
    }
    for (int  e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}