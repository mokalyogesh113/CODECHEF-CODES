#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<5;i++)
        if(s1[i]==s2[i])    cout<<"G";
        else                cout<<"B";
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