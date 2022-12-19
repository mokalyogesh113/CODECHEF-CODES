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
    int n , h;
    cin>>n>>h;
    vi v(n);
    scanArray(v);

    int pos = 0;
    bool hld = false;

    int ch;
    cin>>ch;
 
    while(ch!=0)
    {
        switch(ch)
        {
            case 1:
                if(pos>0)
                    pos-=1;
            break;

            case 2:
                if(pos<n-1)
                    pos+=1;
            break;

            case 3:
                if(v[pos]!=0 && hld==false)
                {
                    hld = true;
                    v[pos]-=1;
                }
            break;

            case 4:
                if(v[pos]<h && hld == true)
                {
                    hld = false;
                    v[pos]+=1;
                }
            break;
        }
        cin>>ch;
    }
    printArray(v);
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int T=1;  
    // cin>>T;
    for(int c=1;c<T+1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC  << " mS\n";
    return 0;    
}

