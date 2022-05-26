#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
      ll n,k;
    cin>>n>>k;
    if(n==1 && k==1) {
    cout<<1<<endl;}
    else{
         if(k<2 || k>n)
         {cout<<-1<<endl;}
        else{
         int c=0;
         for(int i=0;i<k-1;i++){
                cout <<(i+1)<<" ";
                c=i;
            }
            for(int i=0;i<n-c-1;i++){
                 cout<<(n-i)<<" ";
            }
             cout<<endl;
        }
    }
    
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