#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test,flag=true;
    cin >> test;
    if(test==1){cout << "YES" << endl;
    return 0;}
    map<long long,long long>data;
    for (long long i = 0; i < test; ++i)
    {
        long long x;
        cin >> x;
        data[x]++;
    }
    if(test&1)test++;
    for(auto &it:data)
    {
        if(it.second >test/2)flag= false;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}