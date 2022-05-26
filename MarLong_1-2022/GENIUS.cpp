#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
vll v;
bool f(ll q,ll m)
{
    ll t1=0,t2=0,t3=0;
    t1=m/3;
    int temp=m%3;
    if(temp==0)
    {
        v.push_back(t1);
        v.push_back(t2);
        if(t1<=q){
            t3=q-t1-t2;

            if(t3/4>0){
                ll cnt=t3/4;
                v[0]+=cnt;
                v[1]+=(cnt*3);
                v.push_back(q-v[0]-v[1]);
            }
            else    v.push_back(q-t1-t2);
        }
        else         return 0;
        return 1;
    }
    else{
        t1++;
        t2=3-temp;
        v.push_back(t1);
        if(t1+t2<=q) {   
            v.push_back(t2);   
            
            t3=q-t1-t2;

            if(t3/4>0){
                ll cnt=t3/4;
                v[0]+=cnt;
                v[1]+=(cnt*3);
                v.push_back(q-v[0]-v[1]);
            }
            else    v.push_back(t3);
        }else   return 0;
    }

    return 1;
}


void solve()
{
    ll q,m; cin>>q>>m;
    v.clear();
    if(f(q,m))
    {
        cout<<"YES"<<endl;
        for(auto x:v)    cout<<x<<" ";   cout<<endl;    

    }
    else{
        cout<<"NO"<<endl;
    }
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