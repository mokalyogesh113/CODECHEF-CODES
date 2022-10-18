#include<iostream>
using namespace std;

int main()
{
    int n;  cin>>n;
    n=n%4==0 ? n+1 : n-1;
    cout<<n;
    return 0;
}