#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int val(char ch)
{
    if(ch=='d' || ch=='f')  return 1;
    return 0;
}

int f(string s)
{
    int ans=2;
    for(int i=1;i<s.length();i++)
    {
        ans+=2;
        if(val(s[i])==val(s[i-1]) ) 
            ans+=2;
    }
    return ans;
}
void solve()
{
    int n;  cin>>n;
    vector<string> s;
    int sum=0;
    for(int i=0;i<n;i++){
        string S;
        cin>>S;
        int temp=f(S);
        if(count(s.begin(),s.end(),S)>=1)   temp=temp/2;
        s.push_back(S);
        sum+=temp;
    }
    cout<<sum<<endl;
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