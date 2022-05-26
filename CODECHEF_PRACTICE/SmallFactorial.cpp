#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define max 500
using namespace std;

int multiply(vi &v,int n, int res_pos)
{
    int carry=0;
    for(int i=0;i<=res_pos;i++)
    {
        int temp=(v[i]*n)+carry;
        carry=temp/10;
        v[i]=temp%10;
    }
    while(carry)
    {
        v[++res_pos]=carry%10;
        carry/=10;
    }
    return res_pos;
}

void solve()
{
    int n;  cin>>n;
    if(n<=1){
        cout<<"1"<<endl;
        return;
    }

    vi v(max,0);
    v[0]=1;
    int res_pos=0;
    for(int i=n;i>=1;i--)
    {
        res_pos=multiply(v,i,res_pos);
    }

   for(int i=res_pos;i>=0;i--)
    cout<<v[i];
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