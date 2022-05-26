#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int N;  cin>>N;
    string s;   cin>>s;

    int c=0,n=0,d=0;

    for(int i=0;i<14;i++)
        switch(s[i])
        {
            case 'C':   c++;    break;
            case 'D':   d++;    break;
            case 'N':   n++;    break;
        }
    
    int points=2*c-2*n;
    if(points > 0)
        cout<<60*N<<endl;
    else if(points < 0)
        cout<<40*N<<endl;
    else
        cout<<55*N<<endl;
    




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