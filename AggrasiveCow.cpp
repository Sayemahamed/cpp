#include<bits/stdc++.h>
using namespace std;
long long stalls[100000],cows,stallCount;
bool isPossible(long long value)
{
    long long temp = 1,initial=stalls[0];
    for(long long i=1;i<stallCount;i++)
    {
        if(stalls[i]-initial>=value)
        {
            temp++;
            initial=stalls[i];
        }
        if(temp>=cows)return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test;
    cin>>test;
    while (test--)
    {
        cin>>stallCount>>cows;
        for(long long i=0;i<stallCount;i++)cin>>stalls[i];
        sort(stalls,stalls+stallCount);
        long long low=0,high=1,mid;
        while(isPossible(high))high<<=1;
        while(high-low>1)
        {
            mid=(high+low)>>1;
            if(isPossible(mid))
            low=mid;
            else
            high=mid;
        }
        cout<<low<<endl;
    }
}