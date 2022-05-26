#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
        ll n, k;
        cin >> n >> k;
        vll v(1, 1);
        k -= n;
        ll curr = 2;

        for (int i = 2; i <= n; i++) {
            if (k < v.size()) {
                int val = v[v.size()- k- 1];
                v.push_back(val);
                break;
            }
            k -= v.size();
            v.push_back(curr);
            curr++;
        }
        while (v.size() < n) {
            v.push_back(v.back());
        }

        for(auto x: v){
            cout << x << " ";
        }cout << endl;
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