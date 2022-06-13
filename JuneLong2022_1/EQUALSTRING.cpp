//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    set<char> s;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i]){
            s.insert(s2[i]);
        }
    }
    cout<<s.size()<<endl;    
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

