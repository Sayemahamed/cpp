#include<bits/stdc++.h>
using namespace std;
const double Pi=3.14159265358979323846264338327950;
float friends,pie,pieSizes[100000];
bool isPossible(float size)
{
    float each=0;
    for(long long i=0;i<pie;i++)each+=pieSizes[i];
    return size<=each/friends;
}
int main()
{
    long long test;
    cin >> test;
    while (test--) 
    {
        cin >>pie >>friends ;
        friends++;
        for(long long i=0; i<pie; i++)
        {
            cin >>pieSizes[i];
            pieSizes[i]=pieSizes[i]*pieSizes[i]*Pi;
        }
        float low = 0,high=1e9,mid;
        while(high-low>0.0001)
        {
            mid = (low+high)/2;
            if(isPossible(mid))
                low=mid;
                else
                high=mid;
        }
        if(isPossible(high))cout<<high<<endl; else  cout<<low<<endl;
    }
}