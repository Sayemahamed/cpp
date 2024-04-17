#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    long long n,k;
    cin>>n>>k;
    string a;
    for(int i=0;i<k;i++)
    {
        a+=('a'+i);
    }
    for(int i=0,j=0;j<n;i++,j++)
    {
        if(i>k-1) i=0;
        cout<<a[i];
    }
}