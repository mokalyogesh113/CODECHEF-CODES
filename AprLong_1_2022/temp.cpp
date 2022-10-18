#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s1,s2;
   cin>>s1>>s2;
   int n1=s1.length(),n2=s2.length();
   int ans=-1;
   for(int i=0;i<=n1-n2;i++)
   {
       bool flag=1;
       for(int j=0;j<n2;j++)
       {
           if(s2[j]!=s1[i+j] && s2[j]!='*')
            {
                flag=0;
                break;
            }
       }
       if(flag)
       {
           ans=i;
           break;
       }
   }
   cout<<ans<<endl;
    return 0;
}