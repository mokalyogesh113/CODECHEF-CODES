#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

vi f(vi v)
{
    vector<int> ans;
    int val=v.size();
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ans.push_back(val);
    while(v.size()>1)
    {
        int x=v[v.size()-1];
        v.pop_back();
        while(v[v.size()-1]==x)
            v.pop_back();
        ans.push_back(v.size());
    }
    return ans;
}


void solve()
{
    int n;  cin>>n;
    vi v(n);    
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    vi ans=f(v);
    for(auto x:ans)   
        cout<<x<<" ";


}

int main()
{
    solve();

    return 0;    
}


