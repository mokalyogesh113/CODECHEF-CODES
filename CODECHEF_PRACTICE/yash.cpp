#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define N 10
using namespace std;

vi f1(int arr[N][N],int i,int j,int n)
{
    vi v;
    while(i<n && j>=0)
        v.push_back(arr[i++][j--]);
    return v;
}


void f(int arr[N][N],int n)
{
    vector<vector<int>> ans((n*2)-1);
    int cnt=0;
    for(int i=0;i<n;i++)
        ans[cnt++]=f1(arr,0,i,n);
    for(int i=1;i<n;i++)
        ans[cnt++]=f1(arr,i,n-1,n);

    for(int i=0;i<(n*2)-1;i++)
        for(int x:ans[i])
            cout<<x<<" ";
}

void solve()
{
    int n;  cin>>n;
    int arr[N][N]; 
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    f(arr,n);

}

int main()
{
    solve();

    return 0;    
}