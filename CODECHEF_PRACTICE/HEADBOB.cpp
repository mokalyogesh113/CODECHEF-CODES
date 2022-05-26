#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int ans(string s)
{   
    for(auto i:s)
    {
        if(i=='I')
            return 1;
        if(i=='Y')
            return 2;
    }

    return 3;
}

void solve()
{
    int n;      cin>>n;
    string s;   cin>>s;
    switch(ans(s))
    {
        case 1:
            cout<<"INDIAN"<<endl;
            break;
        case 2:
            cout<<"NOT INDIAN"<<endl;
            break;
        case 3:
            cout<<"NOT SURE"<<endl;
            break;
    }    
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