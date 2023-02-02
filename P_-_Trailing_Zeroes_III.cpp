#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    for(long long i=1;i<=test;i++)
    {
        long long n;
        cin>>n;
        if(n!=5)
        {
            cout<<"Case "<<i<<": "<<(n-n/10)*5<<endl;
        }
        else
        cout<<"Case "<<i<<": impossible"<<endl;
    }
}