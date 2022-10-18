#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
bool f(string s){
    int l=s.length();
    if(l%2) return 0;
    for(int i=0;i<=l/2;i++){
        if(count(s.begin(),s.end(),s[i])==(l/2))    return 1;
    }
    return 0;
}

void solve()
{
    string s;
    cin>>s;
    if(f(s))    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;    
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