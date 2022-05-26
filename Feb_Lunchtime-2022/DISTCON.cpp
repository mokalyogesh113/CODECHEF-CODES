#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;


int main()
{
    int N;
    cin>>N;
    int val=1000000000/2;
    if(N%2){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<val<<" "<<val+(N/2)<<endl;
    cout<<val+(N/2)<<" "<<val<<endl;
    cout<<val<<" "<<val-(N/2)<<endl;
    cout<<val-(N/2)<<" "<<val<<endl;
    return 0;    
}