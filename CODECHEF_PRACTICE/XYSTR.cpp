#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s;   cin>>s;
    int cnt=0;
    for(int i=0;i<s.length()-1 ; i++)
    {
        if((s[i]=='x' && s[i+1]=='y' ) || (s[i]=='y' && s[i+1]=='x' ))
        {
            cnt++;
            i++;
        }
    }    
    cout<<cnt<<endl;
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