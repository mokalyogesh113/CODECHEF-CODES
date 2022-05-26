#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;


void solve()
{
    int n;  cin>>n;
    set<int> s1,s2;
    for(int i=0;i<n;i++)
    {
        int x1,x2;
        cin>>x1>>x2;
        s1.insert(x1);
        s2.insert(x2);
    }
    int cnt=(2*n)-(n-s1.size())-(n-s2.size());
    cout<<cnt<<endl;
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