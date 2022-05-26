#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;

    vll v(n), a, b;
    for(int i=0;i<n;i++) cin >> v[i];

    for(int i = 0; i < n; i++){
      if(i & 1) a.push_back(abs(v[i]));
      else b.push_back(abs(v[i]));
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a[a.size()-1]>b[0])
    swap(a[a.size() - 1], b[0]);
    for(auto x: b) ans += x;
    for(auto x: a) ans -= x;
    cout << ans << endl;     
    
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