#include <bits/stdc++.h>
using namespace std;
const long long mx = 1e6;
long long arr[mx], element,mmx;
long long getValue(long long &a,long long &b)
{
    long long temp=a*b,tem=0;
    while(temp)
    {
        tem+=temp%10;
        temp/=10;
    }
    return tem;
}
long long getAns()
{
    long long temp;
    for(long long i = 0; i < element;i++)
    {
        for(long long j = i+1; j <element;j++)
        {
            temp = getValue(arr[i],arr[j]);
            if(temp>mmx)mmx=temp;
        }
    }
    return mmx;
}
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        mmx=0;
        cin >> element;
        for (long long i = 0; i < element; i++)
            cin >> arr[i];
            cout<<getAns()<<endl;
    }
}