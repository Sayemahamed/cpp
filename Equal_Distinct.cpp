#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        set <long long>data;
        long long n;
        cin>>n;
        
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            data.insert(x);
        }
        if(data.size()%2)
        {
            if(data.size()<n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}