#include<bits/stdc++.h>
using namespace std;
long long n;
bool isPossible(long long ans)
{
    return ((ans*(ans+1))>>1)<=n;
} 
int main()
{
    cin >>n;
    long long low=0,high=1,mid;
    while(isPossible(high))high<<=1;
    while(high-low>1)
    {
        mid=(high+low)>>1;
        if(isPossible(mid))
        low=mid;
        else high=mid;
    }
    if(isPossible(low))cout<<low<<endl;
    else cout<<high<<endl;
}