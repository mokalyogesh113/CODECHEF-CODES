//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int start = 0;
    int end = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            reverse(s.begin()+start,s.begin()+1+end);
            cout<<s<<endl;
            if(end-start!=0){
                cnt++;
            }
            start = i+1;
            end = i+1;
            continue;
        }
        end++;
    }
    cout<<cnt<<endl;
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

