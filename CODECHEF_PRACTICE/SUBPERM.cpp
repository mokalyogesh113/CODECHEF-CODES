#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n>=2 && k==1){
        cout<<-1<<endl;
        return ;
    }    
    for(int i=1;i<k;i++){
        cout<<i<<" ";   }
    for(int i=n;i>=k;i--){
        cout<<i<<" ";    }
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