    #include<bits/stdc++.h>
    #define ll long long int 
    #define vi vector<int>
    #define vll vector<long long int>
    using namespace std;

    bool f(string s1,string s)
    {
        vi v(26,0);
        for(int i=0;i<s1.length();i++){
            v[s1[i]-'a']=1;
        }
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']!=1) return 0;
        }
        return 1;
    }

    void solve()
    {
        string s;   cin>>s;
        int n;  cin>>n;
        for(int i=0;i<n;i++)
        {
            string s1;  cin>>s1;
            if(f(s,s1))     cout<<"Yes"<<endl;
            else            cout<<"No"<<endl;
        }
    }

    int main()
    {
        solve();
        return 0;    
    }