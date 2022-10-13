#include<bits/stdc++.h>
using namespace std;
double needed,firstSpeed,secondSpeed,combineSpeed;
bool isPossible(long long ans)
{
    long long pice=needed;
    ans-=firstSpeed;
    pice--;
    if(ans<0)return false;
    return pice<=floor(ans/firstSpeed)+floor(ans/secondSpeed);
}
int main()
{
    cin >>needed >>firstSpeed >>secondSpeed;
    if(firstSpeed > secondSpeed)swap(firstSpeed,secondSpeed);
    // combineSpeed = 1/firstSpeed + 1/secondSpeed;
    long long low=0,high=1,mid;
    // for(long long i=0;i<10;i++)cout<<i<<" "<<isPossible(i)<<endl;
    while(!isPossible(high))high<<=1;
    // cout<<high<<endl;
    while(high-low>0)
    {
        mid=(high+low)>>1;
        if(isPossible(mid))
        high=mid;
        else
        low=mid+1;
    }
    // if(isPossible(low))
    cout<<low<<endl;
    // else
    // cout<<high<<endl;
}