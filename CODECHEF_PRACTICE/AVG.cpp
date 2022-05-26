//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k,v;
    cin>>n>>k>>v;
    int sum=(n+k)*v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum-=arr[i];
    }

    if(sum>0 && sum%k==0)      cout<<sum/k<<endl;
    else                        cout<<-1<<endl;

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

