#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

bool isAmbiguous(vi v,int n) 
{
    for(int i=0;i<n;i++)
    {   
        if(v[v[i]-1]!=i+1)  return 0;
    }
    return 1;
}


void solve()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        vi v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        if(isAmbiguous(v,n))    cout<<"ambiguous\n";
        else                    cout<<"not ambiguous\n";
        cin>>n;
    }
}

int main()
{
    solve();

    return 0;    
}