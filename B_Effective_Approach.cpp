#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test,ans1=0,ans2=0;
    cin>>test;
    map<long long, long long> data;
    for (long long i = 0; i < test; ++i)
    {
        long long x;cin >>x;
        data[x]=i+1;
    }
    long long test1;
    cin>>test1;
    while (test1--)
    {
        long long x;cin>>x;
        ans1+=data[x];
        ans2+=test-data[x]+1;
    }
    cout<<ans1<<" "<<ans2<<endl;
}