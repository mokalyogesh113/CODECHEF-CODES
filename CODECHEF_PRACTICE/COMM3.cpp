#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

double f(double x1,double y1,double x2,double y2)
{
    return sqrt(((y2-y1)*(y2-y1))+ ((x2-x1)*(x2-x1)));
}



void solve()
{
    int n;  cin>>n;
    int v[3][2];
    for(int i=0;i<3;i++)
        cin>>v[i][0]>>v[i][1];

    bool ab=((double)f(v[0][0],v[0][1],v[1][0],v[1][1])<=n);
    bool ac=((double)f(v[0][0],v[0][1],v[2][0],v[2][1])<=n);
    bool bc=((double)f(v[1][0],v[1][1],v[2][0],v[2][1])<=n);

    if(ab&ac || ab&bc ||ac&bc)  cout<<"yes"<<endl;
    else    cout<<"no"<<endl;
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