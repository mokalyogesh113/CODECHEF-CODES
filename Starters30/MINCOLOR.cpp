//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool f(vector<vll> a,int i,int j,int t,int n,int m)
{
    if(i==0)
    {   
        if(j==0)
        {
            if(a[i+1][j]!=t && a[i][j+1]!=t)
                return 1;
            return 0;
        }
        if(j==m-1)
        {
            if(a[i+1][j]!=t && a[i][j-1]!=t)
                return 1;
            return 0;
        }
        if(a[i][j-1]!=t && a[i][j+1]!=t && a[i+1][j]!=t)
            return 1;
        return 0;
    }
    else if(i==n-1)
    {
        if(j==0)
        {
            if(a[i-1][j]!=t && a[i][j+1]!=t)
                return 1;
            return 0;
        }
         if(j==m-1)
        {
            if(a[i-i][j]!=t && a[i][j-1]!=t)
                return 1;
            return 0;
        }
        if(a[i][j-1]!=t && a[i][j+1]!=t && a[i-1][j]!=t)
            return 1;
        return 0;
    }


    if(j==0)
    {
        if(a[i-1][j]!=t && a[i+1][j]!=t && a[i][j+1]!=t)
            return 1;
        return 0;
    }
    if(j==m-1)
    {
        if(a[i-1][j]!=t && a[i+1][j]!=t && a[i][j-1]!=t)
            return 1;
        return 0;
    }

    if(a[i][j-1]!=t && a[i][j+1]!=t && a[i-1][j]!=t && a[i][j+1]!=t)
        return 1;
    return 0;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vll> arr(n);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            arr[i].push_back(0);
        
    for(int i=1;i<=2;i++)
    {
        int x,y;    cin>>x>>y;
        arr[x-1][y-1]=i;
    }    
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]>0) continue;
            int t=1;
            bool flag=0;
            do{
                if(f(arr,i,j,t,n,m))
                    break;
                t++;
            }while(flag!=1);
            arr[i][j]=t;
        }
    }
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
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