//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(string str,string ptrn){
    int n1=str.length(),n2=ptrn.length();
    int i=0,j=0;
    while(i<n1 and j<n2){
        if(str[i]==ptrn[j]){
            i++;
        }
        j++;
    }
    return i==n1;
}


void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(f(s1,s2) or f(s2,s1))    cout<<"YES"<<endl;
    else            cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

