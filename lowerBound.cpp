#include<bits/stdc++.h>
using namespace std;
const long long limit=1e5;
long long elements[limit],number,element;
long long lowerBound(long long element)
{
    long long low=0,high=number,mid;
    while(high-low>1)
    {
        mid=(high+low)/2;
        if(elements[mid]<element)
        low=mid+1;
        else
        high=mid;
    }
    if(elements[low]>=element)return low;
    if(elements[high]>=element)return high;
    return -1;
}
long long upperBound(long long element)
{
    long long low=0,high=number,mid;
    while(high-low>1)
    {
        mid=(high+low)/2;
        if(elements[mid]<=element)
        low=mid+1;
        else
        high=mid;
    }
    if(elements[low]>element)return low;
    if(elements[high]>element)return high;
    return -1;
}
int main()
{
    cin >>number;
    for(long long i=0; i<number; ++i)cin >>elements[i];
    cin >>element;
    cout<<element<<"  "<<lowerBound(element)<<endl;
    cout<<element<<"  "<<upperBound(element)<<endl;
}