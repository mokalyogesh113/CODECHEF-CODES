#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048} , val=11 , cnt=0;
    int n;  cin>>n;
    while(n>0)
    {
        while(arr[val]>n)
            val--;
        int temp=n/arr[val];
        cnt+=temp;
        n=n-(arr[val]*temp);
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