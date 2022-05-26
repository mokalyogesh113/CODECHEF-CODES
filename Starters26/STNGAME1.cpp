#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int i;
    ll n;cin >> n;
    string s1, s2;cin >> s1 >> s2;
    string res(2 * n, '0');
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    ll  tem = n - 1, bem = 0, b = n - 1,a = 0;
    ll rst = 2 * n - 1, TIH = 0;
    for (i = 0; i < 2 * n; i++)
    {
        if (b < bem){res[TIH] = s1[a];a += 1;TIH += 1;continue;}
        if (a > tem){res[TIH] = s2[b];b -= 1;TIH += 1;continue;}
        if (i % 2 == 0)
        {
            if (s1[a] < s2[b]){res[TIH] = s1[a];a += 1;TIH += 1;}
            else{res[rst] = s1[tem];rst -= 1;tem -= 1;}
        }
        else
        {
            if (s2[b] > s1[a]){res[TIH] = s2[b];TIH += 1;b -= 1;}
            else
            {res[rst] = s2[bem];rst -= 1;bem += 1;}
        }
    }cout << res << "\n";
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