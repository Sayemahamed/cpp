#include<bits/stdc++.h>
using namespace std;
vector<long long>treeHeight;
long long logsNeeded;
bool isPossible(long long height)
{
    long long sum=0;
    for(auto&it:treeHeight)sum+=max((long long)0,it-height);
    return sum>=logsNeeded;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long trees;
    cin>>trees>>logsNeeded;
    long long low=0,high=0,mid;
    while(trees--)
    {
        long long x;cin>>x;high=max(high,x);
        treeHeight.push_back(x);
    }
    while(high-low>1)
    {
        mid=(high+low)>>1;
        if(isPossible(mid))
        low=mid;
        else 
        high=mid-1;
    }
    if(isPossible(high))
    cout<<high<<endl;
    else 
    cout<<low<<endl;
}