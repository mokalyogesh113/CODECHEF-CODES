#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k;    cin>>n>>k;
    vi v(k);
    for(int i=0;i<k;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    vi arr(n);
    for(int i=0;i<n;i++)
        arr[i]=i+1;

    int temp=0;
    for(int i=0;i<k;i++)
    {
        reverse(arr.begin()+temp,arr.begin()+v[i]);
        temp=v[i];
    }
    for(int x:arr)
        cout<<x<<" ";
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