#include<bits/stdc++.h>
using namespace std;
const long long limit=1e7;
long long stalls,cow,stallPositions[limit];
bool isPlaceAble(long long distance)
{
    long long initialPosition =-1,numCow=cow;
    for (long long i=0; i<stalls; i++)
    {
        if((stallPositions[i]-initialPosition>=distance)||initialPosition==-1)
        {
            numCow --;
            initialPosition =stallPositions[i];
        }
        if(!numCow)break;
    }
    return numCow<1;
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        cin >>stalls>> cow;
        for(long long i=0; i<stalls; i++)cin >>stallPositions[i];
        sort(stallPositions,stallPositions+stalls);
        long long low=0,high=stalls,mid;
        while(high-low>1)
        {
            mid=(low+high)/2;
            if(isPlaceAble(mid))
            low=mid;
            else
            high=mid-1;
        }
        if(isPlaceAble(high))cout<<high<<endl; else cout<<low<<endl;
    }
}