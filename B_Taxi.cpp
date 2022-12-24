#include <bits/stdc++.h>
using namespace std;
long long sz, idx[5], ans = 0;
int main()
{
    cin >> sz;
    for (long long i = 0; i < sz; i++)
    {
        long long x;
        cin >> x;
        idx[x]++;
    }
    ans+=idx[4];
    ans+=idx[3];
    idx[1]-=idx[3];
    ans+=idx[2]/2;
    if(idx[2]&1)
    {
        idx[1]-=2;
        ans++;
    }
    if(idx[1]>0)
    ans+=(idx[1]+3)/4;
    cout<<ans<<endl;
}