//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    int pos1,posN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i] == 1){
            pos1 = i;
        }
        if(v[i]==n){
            posN=i;
        }
    }
    if(pos1==0 && posN==n-1){
        cout<<0<<endl;
        return;
    }
    int dist1,dist2;
    dist1 = pos1;
    dist2 = n-1-posN;
    if(pos1>posN){
        cout<<dist1+dist2-1<<endl;
    }
    else{
        cout<<dist1+dist2<<endl;
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;    
}

