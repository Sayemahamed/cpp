#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long numbers,query;
    cin >> numbers >> query;
    long long number[numbers];
    for (long long i = 0; i < numbers; ++i)cin >> number[i] ;
    while(query--)
    {
        long long x;
        cin >> x ;
        long long low=0,high=numbers,mid;
        while(high-low>1)
        {
            mid=(low+high)>>1;
            if(number[mid]<=x)
            low=mid;
            else
            high=mid;
            // if(number[mid]==x)break;
        }
        cout<<high<<endl;
    }
}