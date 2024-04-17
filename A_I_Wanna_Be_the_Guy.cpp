#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
        set<long long> data;
        long long a,b;
        cin >> a;
        for(long long i=0; i<a; i++)
        {
            long long x;
            cin >> x;
            data.insert(x);
        }
        cin>>b;
        for(long long i=0; i<b; i++)
        {
            long long x;
            cin >> x;
            data.insert(x);
        }
        if(data.size()==t)
        cout<<"I become the guy."<<endl;
        else
        cout<<"Oh, my keyboard!"<<endl;
}