#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,query;
    cin >> numbers >> query;
    long long number[numbers];
    for (long long i = 0; i < numbers; ++i)cin >> number[i];
    while (query--)
    {
        long long x;
        cin >> x;
        long long low=0,high=numbers,mid;
        while (high -low>0)
        {
            mid = (high +low) / 2;
            if(number[mid] < x)
            low=mid+1;
            else 
            high=mid;
            if(number[mid] == x)break;
        }
        if(number[mid] == x)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}