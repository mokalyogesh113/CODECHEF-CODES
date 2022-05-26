#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s; cin >> s;
    string s1 = s;

    reverse(s.begin(),s.end());
    int m = s.length(), n =s1.length();
    int temp[256];

    memset(temp, 0, sizeof(temp));
    
    for (int i = 0; i < n; i++)
        temp[s1[i]]++;
    
    for (int i = 0; i < n; i++)
        temp[s[i]]--;
    
    int ans = 0;
    
    for (int i = n-1, j=n-1;i>=0;){
        while (i >= 0 && s[i] != s1[j]){
            i--;
            ans++;
        }
        if (i >= 0){
            i--;
            j--;
        }
    }
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