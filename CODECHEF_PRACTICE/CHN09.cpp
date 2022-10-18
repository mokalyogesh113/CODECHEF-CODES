#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
        string s;   cin>>s;
        int a=count(s.begin(),s.end(),'a');
        int b=count(s.begin(),s.end(),'b');
        cout<< (a>b ? b :a)<<endl;
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