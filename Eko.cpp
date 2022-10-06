#include<bits/stdc++.h>
using namespace std;
const long long limit =1e6;
long long number,amount,treeSize[limit];
bool isSufficient(long long hight)
{
    long long total =0;
    for (long long i=0; i<number; i++)
    {
        if (hight <= treeSize[i])
        total += treeSize[i]-hight;
    }
    return total>=amount;
}
int main()
{
    cin >> number >> amount;
    for(long long i = 0; i < number;++i)cin >> treeSize[i];
    long long low =0,high=1e9,mid;
    while(high -low >1)
    {
        mid = (high +low)/2;
        if(isSufficient(mid))
        low=mid;
        else
        high=mid-1;
    }
    if(isSufficient(high))cout<<high<<endl;
    else cout<<low<<endl;
}