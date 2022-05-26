#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    if(s[0]=='0' || s[1]=='0' || s[n]=='0')
    {
        cout<<"No"<<endl;
        return;
    }    
    vi v(n+1);
    v[0]=0;
    int temp=1;
    for(int i=2;i<n;i++)
    {
        if(s[i]=='0')
            v[i]=i;
        else{
            v[i]=temp;
            temp=i;
        }
    }
    v[n]=temp;
    cout<<"Yes"<<endl;
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
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