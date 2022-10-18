//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

long long int gcd(int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    int c = lcm(a,b);
    int t1 = c/a , t2 = c/b;
    if((t1&(t1-1)) ==0 && (t2&(t2-1))==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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

