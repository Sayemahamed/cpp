#include<bits/stdc++.h>
using namespace std;
float rope[100000],pice,ropes;
bool isPossible(float ans)
{
    long long count = 0;
    for(long long i=0; i<ropes; i++)
    {
        // if(ans>rope[i])return false;
        count+=rope[i]/ans;
    }
    return count>=pice;
}
int main()
{
    cin >> ropes >>pice;
    for(long long i = 0; i < ropes; i++)cin >> rope[i];
    float low=0,high=1,mid,tim=200;
    while(isPossible(high))high*=2;
    while(tim--)
    {
        mid=(high+low)/2;
        if(isPossible(mid))
        low=mid;
        else
        high=mid;
    }
    cout <<setprecision(8)<<low<<   endl;
}