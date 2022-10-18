#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int w,c;    cin>>w>>c;
    vs v(w);
    vi flag(w,0);
    for(int i=0;i<w;i++)
        cin>>v[i];
    for(int i=0;i<c;i++){
        int x;  cin>>x;
        while(x--){
            string s;   cin>>s;
            for(int i=0;i<w;i++){
                if(s==v[i]){
                    flag[i]=1;
                    break;
                }
            }
        }
    }
    for(int i=0;i<w;i++){
        if(flag[i]) cout<<"YES ";
        else        cout<<"NO ";
    }
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