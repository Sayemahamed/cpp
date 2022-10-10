#include<bits/stdc++.h>
using namespace std;
long long number,numbers[100000],element;
long long lowerBound()
{
    long long low=0,high=number,mid;
    while(high-low>1)
    {
        mid=(low+high)/2;
        if(numbers[mid]>=element)
        high=mid;
        else
        low=mid;
    }
    if(numbers[high]>=element)return high;
    if(numbers[low]>=element)return low;
    return -1;
}
long long upperBound()
{
    long long low=0,high=number,mid;
    while(high-low>1)
    {
        mid = (low+high)/2;
        if(numbers[mid]>element)
        high = mid;
        else
        low = mid;
    }
    if(numbers[high]>element)return high;
    if(numbers[low]>element)return low;
    return -1;
}
int main()
{
    cin >> number;
    for (int i = 0; i < number; ++i) cin >> numbers[i];
    cin >> element;
    cout<<element<<"  "<<lowerBound()<<endl;
    cout<<element<<"  "<<upperBound()<<endl;
}