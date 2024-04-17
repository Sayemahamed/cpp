#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long t;
    map<long long,long long>data;
    cin>>t;
    for(long long i=1; i<=t; ++i)
    {
        long long n;
        cin>>n;
        data[n] = i;
    }
    for(auto it:data)
    {
        cout<<it.second<<" ";
    }
}