#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    string s;
    cin>>s;
    if(is_sorted(v.begin(),v.end())) {
        cout<<0<<endl;
        return;
    }

    int cntN=count(s.begin(),s.end(),'N');
    if(cntN==n || cntN==0){
        cout<<-1<<endl;
        return;
    }

    vi v1=v;
    sort(v.begin(),v.end());
    
    int start=INT_MAX;
    int last=INT_MIN;

    for(int i=0;i<n;i++){
        if(v[i]!=v1[i]){
            start=min(i,start);
            last=max(i,last);
        }
    }
    bool c1=0,c2=0;
    for(int i=0;i<start;i++)
        if(s[i]!=s[last])
            c1=1;
    for(int i=last;i<n;i++)
        if(s[i]!=s[last])  
            c2=1;
    
    if(s[start]!=s[last] || c1 || c2)
        cout<<1<<endl;
    else 
        cout<<2<<endl;


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