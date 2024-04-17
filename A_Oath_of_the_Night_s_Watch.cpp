#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,count=0,max=0,min=999999999999;
    cin>>t;
    map<long long,long long> data;
    for(long long i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        if(max<n)max=n;
        if(min>n)min=n;
        data[n]++;
    }
    for(auto it:data)
    {
        count+=it.second;
    }
    count-=data[max];
    count-=data[min];
    if(count>0)
    cout<<count<<endl;
    else
    cout<<0<<endl;
}