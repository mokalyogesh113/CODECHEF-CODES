    //Code By @trickymindme
    #include<bits/stdc++.h>
    #define ll long long int 
    #define vi vector<int>
    #define vll vector<long long int>
    using namespace std;

    void solve()
    {
        ll a,b,p,q;     cin>>a>>b>>p>>q;
        if(p%a!=0  || q%b!=0 ){
            cout<<"NO"<<endl;
            return;
        }
        
        if(abs((p/a)-(q/b))<=1)     cout<<"YES"<<endl;
        else                        cout<<"NO"<<endl;

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

