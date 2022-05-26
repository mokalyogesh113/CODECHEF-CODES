    #include<bits/stdc++.h>
    #define ll long long int 
    #define vi vector<int>
    #define vll vector<long long int>
    using namespace std;
    ll n;

    void dfs(int src,vi &vis, vector<vector<ll>> &adj, vll &D)
    {
        vis[src]=1;
        D.push_back(src);
        if(src==n)
            return;
        for(auto x:adj[src])
        {
            if(!vis[x])
                dfs(x,vis,adj,D);
        }
    }


    void solve()    
    {
        ll m;    cin>>n>>m;
        vector<vector<ll>> adj(n+1);
        for(int i=0;i<m;i++)
        {  
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vi vis(n+1,0);
        vll D;
        dfs(1,vis,adj,D);

        ll max=*max_element(D.begin(),D.end());
        cout<<n-max<<endl;
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