#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    for(int i=0;i<n;i++)
    {
        string t;   cin>>t;
        for(int j=0;j<t.size();j++)
        {
            if(t[j]=='_')  {
                cout<<" ";
                continue;
            }
            if(t[j]=='.' || t[j]==',' || t[j]=='!' || t[j]=='?'){
                cout<<t[j]; continue;
            }
            char ch=tolower(t[j]);
            char c=s[ch-'a'];
            if(t[j]>='a' && t[j]<='z')
                cout<<c;
            else if(t[j]>='A' && t[j]<='Z')
                cout<<char(c-32);
        }
        cout<<endl;
    }     
}

int main()
{
    solve();
    return 0;    
}