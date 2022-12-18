#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long array,j=0,ans=0,mx;
    cin >> array;
    long long arr[array];
    for (long long i = 0; i <array; ++i)
    {
        cin >> arr[i];
        if(i!=0)arr[i]+=arr[i-1];
    }
    mx=arr[array-1];
    for(long long i = 0; i <array; ++i)
    {
        
    }
}