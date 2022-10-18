    #include<bits/stdc++.h>
    #define ll long long int 
    #define vi vector<int>
    #define vll vector<long long int>
    using namespace std;
    int n;
    bool f(vi v)
    {
        if(v[n/2]!=(n/2)+1) return 0;
        for(int i=0;i<n/2;i++)
            if(v[i]!=i+1 || v[n-1-i]!=i+1)   return 0;
        return 1;
    }

    void solve()
    {
        cin>>n;
        vi v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        if(n%2==0) {
            cout<<"no"<<endl;
            return;
        }
        if(f(v))
            cout<<"yes"<<endl;
        else   cout<<"no"<<endl;



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