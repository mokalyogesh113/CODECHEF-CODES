//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vi v(n);
    ll p_count=0,n_count=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1) p_count++;
        else        n_count++;
    }

    if(abs(p_count-n_count)<2){
            cout<<"YES"<<endl;
    }
    else if(abs(p_count-n_count)==2){
        if(p_count % 2 ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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

