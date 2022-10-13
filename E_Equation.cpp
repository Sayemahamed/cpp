#include <bits/stdc++.h>
using namespace std;
float f;
bool isPossible(float ans)
{
    return ans*ans*ans*ans+2*ans*ans*sqrt(ans)+ans<=f*f;
}
int main()
{
    cin >> f;
    float low=0,high=f,mid;
    for(long long i=0 ; i<200; i++)
    {
        mid=(high+low)/2;
        if(isPossible(mid))
        low=mid;
        else
        high=mid;
    }
    cout<<setprecision(16)<<low<<endl;
}