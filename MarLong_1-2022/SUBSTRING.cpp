#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int count = 0, ans = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] != s[0] && s[i] != s[n-1])
            count+=1;
        else
            count = 0;
        ans = max(ans , count);
    }
    if(ans == 0)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();        
    }
}