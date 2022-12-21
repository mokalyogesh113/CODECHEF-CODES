#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool even = false, odd = false;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1' && i%2==0)
            even = true;
        if(s[i]=='1' && i%2==1)
            odd= true;
        if(even && odd)
            break;
    }
    if(even && odd)
        cout<<"1"<<endl;
    else 
        cout<<"2"<<endl;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
}