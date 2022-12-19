//Code By @trickymindme
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
#define all(c) (c).begin(),(c).end()
#define scanArray(v) for(auto &i:v) cin>>i;
#define printArray(v) for(auto &i:v) cout<<i<<" "; cout<<endl;
using namespace std;

void f1(vector<int> &v)
{
   int n = v.size();
   nth_element(v.begin(), v.begin() + n / 2, v.end());
   int m = *(begin(v) + n / 2);

#define A(i) v[(1 + 2 * (i)) % (n | 1)]

   int l = 0, r = n - 1;
   for (int i = 0; i <= r;)
       if (A(i) > m)
           swap(A(i++), A(l++));
       else if (A(i) < m)
           swap(A(i), A(r--));
       else
           i++;
}

void solve()
{
   int n;
   cin >> n;
   vi v(n);
   scanArray(v);
   f1(v);
   bool flag = false;
   for (int i = 0; i < n - 2; i++)
   {
      if (v[i] <= v[i + 1] && v[i + 1] <= v[i + 2])
      {
         flag = true;
         break;
      }
      if (v[i] >= v[i + 1] && v[i + 1] >= v[i + 2])
      {
         flag = true;
         break;
      }
   }
   if (!flag)
   {
      printArray(v);
   }
   else
      cout << -1 << endl;
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

