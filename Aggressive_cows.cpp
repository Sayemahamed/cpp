#include<bits/stdc++.h>
using namespace std;
long long stallCount,cowCount,stallLocations[100000000];
bool isPlaceAble(long long distance)
{
    long long initialDistance = -1,cow=cowCount;
    for (long long i=0; i<stallCount; i++)
    {
        if (stallLocations[i] -initialDistance >=distance || initialDistance ==-1)
        {
            cow--;
            initialDistance=stallLocations[i];
        }
        if(cow<1)return true;
    }
    return false;
}
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        cin >>stallCount >>cowCount;
        for (long long i = 0; i < stallCount; i++)cin>>stallLocations[i];
        sort(stallLocations,stallLocations+stallCount);
        long long low=0,high=1e9,mid;
        while(high-low>1)
        {
            mid = (high+low)/2;
            if(isPlaceAble(mid))
            low = mid;
            else
            high = mid;
        }
        if(isPlaceAble(high))cout <<high <<endl; else  cout<<low<<endl;
    }
}