#include<bits/stdc++.h>
using namespace std;
long long coin;
bool isPossible(long long hight)
{
    return (hight*(hight+1))/2 <=coin;
}
int main()
{
    long long test;
    cin>>test;
    while (test--) 
    {
        cin>>coin;
        long long low=0,high=7,mid;
        while(high-low>1)
        {
            mid=(high+low)/2;
            if(isPossible(mid))
            low=mid;
            else
            high=mid-1;
        }
    if(isPossible(high))cout<<high<<endl; else cout<<low<<endl;
    }
}