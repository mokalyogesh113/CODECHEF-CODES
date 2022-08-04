// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool isPrime(int n)
{
    if(n==1)    return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

vi solve(int n)
{
    vi v;
    while (n != 1)
    {
        v.push_back(n);
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n *= 3;
            n++;
        }
    }
    v.push_back(1);
    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 1;
    cin >> n;
    vi v = solve(n);
    int cnt = v.size(), cnt1 = 0;
    for (int i = 0; i < cnt; i++)
    {
        cout << v[i] << " ";
        if (isPrime(v[i]))
        {
            cnt1++;
        }
        if (i % 10 == 9)
        {
            cout << endl;
        }
    }
    if (cnt % 10 != 0)
    {
        cout << endl;
    }

    cout << cnt << endl;
    cout << cnt1 << endl;

    return 0;
}
