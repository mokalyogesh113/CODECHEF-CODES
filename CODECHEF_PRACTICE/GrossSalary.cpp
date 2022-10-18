#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    float B_Sal;    cin>>B_Sal;
    float Hra,Da,G_Sal;
    if(B_Sal<1500)
    {
        Hra=B_Sal*0.1;
        Da=B_Sal*0.9;
    }
    else
    {
        Hra=500;
        Da=B_Sal*0.98;
    }
    G_Sal=B_Sal+Hra+Da;
    cout<<fixed<<setprecision(2)<<G_Sal<<endl;
    return;
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