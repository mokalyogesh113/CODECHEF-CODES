//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
        vll v(4); 
        for (int i = 0; i < 4; i++) 
            cin >> v[i]; 
        sort(v.begin(), v.end()); 
        ll a1 = (v[2] + v[0]) / 2,b1 = v[2] - a1; 
        
        if ((a1 % 1 == 0) && (a1 != 0) && (b1 % 1 == 0) && (b1 != 0)) 
            if ((a1 / b1 == v[1]) && (a1 * b1 == v[3]) && (a1 >= 1) && (b1 >= 1) && (a1 <= 10000) && (b1 <= 10000)) 
            { 
                cout << a1 << " " << b1 << endl; 
                return; 
            }

        ll a2 = (v[2] + v[1]) / 2,b2 = v[2] - a2; 
        if ((a2 % 1 == 0) && (a2 != 0) && (b2 % 1 == 0) && (b2 != 0)) 
            if ((a2 / b2 == v[0]) && (a2 * b2 == v[3]) && (a2 >= 1) && (b2 >= 1) && (a2 <= 10000) && (b2 <= 10000)) 
            { 
                cout << a2 << " " << b2 << endl; 
                return; 	
            } 

        ll a3 = (v[3] + v[0]) / 2,b3 = v[3] - a3; 
        if ((a3 % 1 == 0) && (a3 != 0) && (b3 % 1 == 0) && (b3 != 0)) 
            if ((a3 / b3 == v[1]) && (a3 * b3 == v[2]) && (a3 >= 1) && (b3 >= 1) && (a3 <= 10000) && (b3 <= 10000)) 
            { 
                cout << a3 << " " << b3 << endl; 
                return; 
            } 

        ll a4 = (v[3] + v[1]) / 2,b4 = v[3] - a4; 
        if ((a4 % 1 == 0) && (a4 != 0) && (b4 % 1 == 0) && (b4 != 0)) 
            if ((a4 / b4 == v[0]) && (a4 * b4 == v[2]) && (a4 >= 1) && (b4 >= 1) && (a4 <= 10000) && (b4 <= 10000)) 
            { 
                cout << a4 << " " << b4 << endl; 
                return; 
            } 
        cout << "-1 -1" << endl;   
}

int main()
{
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}