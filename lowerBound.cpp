#include<bits/stdc++.h>
using namespace std;
long long upper_bound(long long element,long long n,long long data[])
{
    long long left=0,right=n,mid;
    while(right-left>1)
    {
        mid=(right+left)/2;
        if(data[mid]<=element)
        left=mid+1;
        else
        right=mid;
    }
    if(data[left]>element)return left;
    if(data[right]>element)return right;
    return -1;
}
long long lower_bound(long long element,long long n,long long data[])
{
    long long left= 0,right=n,mid;
    while (right-left>1)
    {
        mid= (right+left)/2;
        if(data[mid]<element)
        left=mid+1;
        else 
        right=mid;
    }
    if(data[left]>=element)return left;
    if(data[right]>=element)return right;
    return -1;
}
int main()
{
    long long n;
    cin >> n;
    long long data[n],element;
    for (int i = 0; i < n; ++i)cin >> data[i];
    cin >> element;
    cout<<element<<"  "<<lower_bound(element,n,data)<<endl;
    cout<<element<<"  "<<upper_bound(element,n,data)<<endl;
}