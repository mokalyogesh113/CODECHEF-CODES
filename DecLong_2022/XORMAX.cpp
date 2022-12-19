//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    int n = s1.length();

    int s11 = count(all(s1),'1');
    int s10 = count(all(s1),'0');

    int s21 = count(all(s2),'1');
    int s20 = count(all(s2),'0');

    int c1 = min(s11,s20) + min(s21 , s10);
    int c0 = n- c1;

    for(int i=0;i<c1;i++)
        cout<<1;
    for(int i=0;i<c0;i++)
        cout<<0;
    
    cout<<endl;

    


    return ;


}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

