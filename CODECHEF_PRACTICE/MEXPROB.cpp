#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int MEX(vi v)
{
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());
    int ans=0;
    for(auto x:v)
    {
        if(x!=ans)
            return ans;
        ans++;
    }
    return ans;
}

void solve()
{
    int n,k;    cin>>n>>k;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vi ans;
    vi temp;
    for(int i=0;i<n;i++)
    {
        temp.clear();
        for(int j=i;j<n;j++){ 
            temp.push_back(v[j]);
            ans.push_back(MEX(temp));
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[k-1]<<endl;    
}

int main()
{
    int T=0;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}