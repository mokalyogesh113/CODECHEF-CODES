//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

string repeat(string s, int n)
{
    string s1 ;
    for (int i=0; i<n;i++)
        s1 += s; 
    return s1;
}
void solve(){

    int a,b;
    cin>>a>>b;
    if(a==1 || b==1){
        cout<<-1<<endl;
        return;
    }
    if(a%2==0 && b%2==0){
        cout<<repeat("a",a/2)<<repeat("b",b)<<repeat("a",a/2)<<endl;
        cout<<repeat("b",b/2)<<repeat("a",a)<<repeat("b",b/2)<<endl;
    }
    else if(a%2==0){
        cout<<repeat("a",a/2)<<repeat("b",b)<<repeat("a",a/2)<<endl;
        cout<<repeat("b",b/2)<<repeat("a",a/2)<<"b"<<repeat("a",a/2)<<repeat("b",b/2)<<endl;
    }
    else if(b%2==0){
        cout<<repeat("b",b/2)<<repeat("a",a)<<repeat("b",b/2)<<endl;
        cout<<repeat("a",a/2)<<repeat("b",b/2)<<"a"<<repeat("b",b/2)<<repeat("a",b/2)<<endl;
    }
    else{
        cout<<-1<<endl;
    }


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

