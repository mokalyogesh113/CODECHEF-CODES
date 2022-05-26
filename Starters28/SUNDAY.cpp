    #include<bits/stdc++.h>
    #define ll long long int 
    #define vi vector<int>
    #define vll vector<long long int>
    using namespace std;

    void solve()
    {
        int n; cin>>n;
        int ans=8;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x%7!=6 && x%7!=0){
                ans++;
            }
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