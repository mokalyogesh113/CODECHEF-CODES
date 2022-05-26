#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(string s)
{
    int n=s.size();
    if(n==0)    return 1;
    if(n%2==1)  return 0;
    for(int i=0;i<n;i+=2)
        if(s[i]!='H')   return 0;
    for(int i=1;i<n;i+=2)
        if(s[i]!='T')   return 0;
    
    return 1;   

}
void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    s.erase(remove(s.begin(), s.end(),'.'),s.end());
    if(f(s))    cout<<"Valid";
    else        cout<<"Invalid";
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