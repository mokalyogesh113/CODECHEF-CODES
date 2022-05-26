#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
void solve()
{
    int n;  cin >> n;
    vi v(n + 2, 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    int x = 1, curr=1;
    while (x <= n)
    {
        if (curr)
        {
            v[x] = v[x + 1] * 2;
            x += 2;
        }
        else
        {
            v[x] = v[x - 1] * 2;
            x++;
        }

        curr = 1 - curr;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    cout<<endl;    
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