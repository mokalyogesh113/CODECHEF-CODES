#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
int arr[6]={1,2,5,10,50,100};
void solve()
{
    int n;  cin>>n;
    int pos=5,cnt=0;
    while(n)
    {   
        while(arr[pos]>n)
            pos--;
        
        int temp=n/arr[pos];
        cnt+=temp;
        n-=(temp*arr[pos]);
    }
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