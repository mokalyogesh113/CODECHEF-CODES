#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(string s1,string s2)
{
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]!=s2[i] &&(s1[i]!='?' && s2[i]!='?'))
            return 0;
    }
    return 1;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(f(s1,s2))        cout<<"Yes"<<endl;
    else                cout<<"No"<<endl;
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