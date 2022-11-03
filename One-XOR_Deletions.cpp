#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long elements;
        cin >> elements;
        map<long long,long long>data;
        for (long long i = 0; i < elements; i++)
        {
            long long x;
            cin>>x;
            x=(x|1)^ 1;
            // cout<<x<<' ';
            data[x]++;
        }
        long long mx=0;
        for(auto& it:data)
        {
            if( it.second>mx)mx=it.second;
        }
        cout<<elements-mx<<endl;
    }
}