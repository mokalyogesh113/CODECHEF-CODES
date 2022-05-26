#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;cin>>n;

    map<int,int> m;

    for(int i=0;i<2*n;i++){
        int x;cin>>x;
        m[x]++;
    }

    bool f = true;

    for(int i=0;i<2*n;i++){
        if(m[i] == 1){
        f = false;
        break;
    }
    else if(m[i] == 0) break;
    }


    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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