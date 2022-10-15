#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        long long element,flag = true;
        cin >> element;
        map<long long, long long>data;
        for (long long i = 0; i < element; i++)
        {
            long long x;
            cin >> x;
            data[x] ++;
        }
        for(auto &it:data)
        {
            if (it.second>1)flag=false;
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}