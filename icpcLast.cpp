#include<bits/stdc++.h>
using namespace std;
long long bridge,rood;
float smallest;
bool isSmaller(float start)
{
    
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        cin >>bridge >>rood;
        smallest=bridge;
        float low=0,high=bridge/2,mid;
        while(high-low>0.0001)
        {
            mid=(low+high)/2;
            if(isSmaller(mid))
            low=mid;
            else
            high=mid;
        }
    }
}