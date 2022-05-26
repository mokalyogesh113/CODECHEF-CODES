//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;
    cin>>s;
    if(is_sorted(s.begin(),s.end())){
        cout<<"YES"<<endl;
        return;
    }

    string s1=s;
    sort(s1.begin(),s1.end());
    for(int i=0;i<n/2;i++)
    {
        if(!((s[i]==s1[i] && (s[n-1-i]==s1[n-1-i]) || s[i]==s1[n-1-i] && s[n-1-i]==s1[i]))){
            cout<<"NO"<<endl;
            return;

        }
    }
    cout<<"YES"<<endl;

}

int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}