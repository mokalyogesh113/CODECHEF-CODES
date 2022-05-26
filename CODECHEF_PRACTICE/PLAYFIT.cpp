//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,ans=-1;
    cin >> n;
    vi v(n);
    for(int i=0;i<n;i++) 
        cin >>v[i];
    int temp=v[0];
    for (int i=1;i<n;i++)
    {
        if (v[i]>temp)
            ans=max(ans,v[i]-temp);
        else
            temp = v[i];
    }
    if (ans<0)
        cout<< "UNFIT"<<endl;
    else
        cout<<ans<<endl;

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

