#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    char c; cin>>c;
    if(c=='B' || c=='b')
        cout<<"BattleShip"<<endl;
    else if(c=='C' || c=='c')
        cout<<"Cruiser"<<endl;
    else if(c=='D' || c=='d')
        cout<<"Destroyer"<<endl;
    else if(c=='F' || c=='f' )
        cout<<"Frigate"<<endl;
    
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