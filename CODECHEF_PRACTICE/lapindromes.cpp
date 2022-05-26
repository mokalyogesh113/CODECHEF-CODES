#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool islapin(string s)
{
    int size=s.length();
    sort(s.begin(),s.begin()+size/2);
    sort(s.end()-size/2,s.end());

    return (s.substr(0,(size)/2))==s.substr((size+1)/2,(size/2));
}

void solve()
{
    string s;   cin>>s;
    if(islapin(s))  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
    return;
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