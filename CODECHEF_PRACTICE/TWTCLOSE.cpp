#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int t,N;    cin>>t>>N;
    vi v(t+1,0);
    int cnt=0;
    while(N--){
        string s;
        int n;
        cin>>s;
        if(s=="CLOSEALL"){
            fill(v.begin(),v.end(),0);
            cout<<0<<endl;
            cnt=0;
        }
        else{
            cin>>n;
            if(v[n]==0){
                cout<<++cnt<<endl;
                v[n]=1;
            }
            else{
                cout<<--cnt<<endl;
                v[n]=0;
            }
        }
    }
}

int main()
{
    solve();

    return 0;    
}