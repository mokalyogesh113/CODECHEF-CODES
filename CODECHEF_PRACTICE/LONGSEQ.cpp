#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    string s;   cin>>s;
    int c0=count(s.begin(),s.end(),'0');
    int c1=count(s.begin(),s.end(),'1');
    if(c0==1 || c1==1)  cout<<"Yes"<<endl;
    else    cout<<"No"<<endl;

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