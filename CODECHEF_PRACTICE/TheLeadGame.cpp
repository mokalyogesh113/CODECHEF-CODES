#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    int w,l=0,A=0,B=0;
    for(int i=0;i<n;i++)
    {
        int a,b;    cin>>a>>b;
        A+=a;
        B+=b;
        if(l<abs(A-B))
        {
            l=abs(A-B);
            w=A>B? 1 : 2;
        }
    }    
    cout<<w<<" "<<l;
}

int main()
{
    solve();

    return 0;    
}