#include<bits/stdc++.h>
using namespace std;
const long long mx=10e5;
long long balloons,helpers,rest[mx],tim[mx],inflated[mx],anss[mx];
bool isPossible(long long an)
{
    long long needed=balloons;
    for (long long i=0; i<helpers; i++)
    {
        long long anss[i]=tim[i]+rest[i];
        anss[i]/=inflated[i];
        anss[i]/=an;
        needed-=anss[i];
    }
    return needed<=0;
}
int main()
{
    cin >>  balloons >> helpers;
    for (int i=0;i<helpers;i++)
    cin >>tim[i] >> inflated[i]>>rest[i];
    long long low=0,high=1, mid;
    if(!isPossible(high))high<<=1;
    while(high-low>1)
    {
        mid=(low+high)>>1;
        if(isPossible(mid))
        high=mid;
        else low=mid;
    }
    cout<<low<<endl;
    for(auto &it:anss)cout<<it<<" ";
}