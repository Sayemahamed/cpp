#include<bits/stdc++.h>
using namespace std;
long long wight, hight , cnt;
bool isPossible(long long ans)
{
    return (ans/wight)*(ans/hight)>=cnt;
}
int main()
{
    cin >> wight >> hight >> cnt;
    long long low=0,high=1,mid;
    while(!isPossible(high))high<<=1;
    while(high-low>0)
    {
        mid=(high+low)>>1;
        if(!isPossible(mid))
        low=mid+1;
        else
        high=mid;
    }
    cout<<low<<endl;
    // for(long long i=0; i<20; i++)cout<<i<<"  "<<isPossible(i)<<endl;
}