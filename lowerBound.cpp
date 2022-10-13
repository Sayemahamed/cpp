#include<bits/stdc++.h>
using namespace std;
long long element,elementToFind;
long long elements[1000000];
long long lowerBound()
{
    long long low = 0 ,high = element,mid;
    while(high-low>0)
    {
        mid = (high + low)>>1;
        if(elements[mid] < elementToFind)
        low=mid+1;
        else
        high=mid;
    }
    if(low>=element) return -1;
    return low;
}
long long higherBound()
{
    long long low=0,high=element,mid;
    while(high-low>0)
    {
        mid=(high+low)>>1;
        if(elements[mid] <= elementToFind)
        low=mid+1;
        else
        high=mid;
    }
    if(low>=element) return -1;
    return low;
}
int main()
{
    cin >> element;
    for (int i = 0; i < element; ++i)cin >> elements[i];
    cin >> elementToFind;
    cout<<elementToFind<<"  "<<lowerBound()<<endl; 
    cout<<elementToFind<<"  "<<higherBound()<<endl; 
}