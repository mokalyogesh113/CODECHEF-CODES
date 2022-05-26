#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;
struct node
{
    ll data;
    node* next=NULL;
};

int mex(vll v)
{
    int i=0;
    while(true)
        if(!count(v.begin(),v.end(),i++))
            return i-1;
    return 0;
}

ll f(node *root)
{
    bool flag=0;
    vll v;
    node *trav=root;
    while(trav!=NULL)
    {
        if(trav->data==0)   flag=1;
        v.push_back(trav->data);
        trav=trav->next;
    }
    if(!flag)   return 0;
    return mex(v);

}
void solve()
{
    bool flag=0;
    int n;  cin>>n;
    vector<node *> v;
    for(ll i=0;i<n;i++)
    {
        ll x;  cin>>x;
        if(x==0) flag=1;
        node* t=new node(); t->data=x;
        v.push_back(t);
    }
    for(ll i=0;i<n-1;i++)
    {
        ll x,y;    cin>>x>>y;
        v[y-1]->next=v[x-1]; 
    }

    ll ans=0;
    if (flag){
        for(ll i=1;i<n;i++)            
            ans=max(ans,f(v[i]));
    }
    cout<<ans<<endl;
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