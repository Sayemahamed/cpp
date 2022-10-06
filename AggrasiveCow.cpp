#include<bits/stdc++.h>
using namespace std;
const long long limit =1e6;
long long stall,cow,stallDistance[limit];
bool isPlaceAble(long long distance) 
{
    long long lastPosition =-1,cowCount=cow;
    for(long long i=0; i<stall; i++)
    {
        if((stallDistance[i]-lastPosition)>=distance||lastPosition==-1)
        {
            cowCount--;
            lastPosition=stallDistance[i];
        }
    }
    return cowCount<1;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> stall >> cow;
        for(long long i=0; i< stall; i++)cin >>stallDistance[i];
        sort(stallDistance, stallDistance+stall);
        long long low=0,high=1e9,mid;
        while(high-low>1)
        {
            mid=(high+low)/2;
            if(isPlaceAble(mid))
            low=mid;
            else
            high=mid-1;
        }
        if(isPlaceAble(high))
        cout<<high<<endl;
        else
        cout<<low<<endl;
    }
}