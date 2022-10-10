#include<bits/stdc++.h>
using namespace std;
long long treeCount,amount,treeHights[10000000];
bool isSufficient(long long hight)
{
    long long total = 0;
    for (long long i = 0; i <treeCount; i++)
    {
        if (treeHights[i] > hight)
        total += treeHights[i]-hight;
        if(total >= amount) return true;
    }
    return false;
}
int main()
{
    cin >> treeCount >> amount ;
    for(long long i = 0; i < treeCount; i++)cin >>treeHights[i];
    long long low=0,high=1e9,mid;
    while(high -low >1)
    {
        mid = (high +low) / 2;
        if(isSufficient(mid))
        low = mid;
        else
        high = mid-1;
    }
    if(isSufficient(high))cout<<high<<endl; else  cout<<low<<endl;
}