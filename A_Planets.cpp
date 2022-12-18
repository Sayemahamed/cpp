#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numberOfPlanets,second,ans=0;
        cin >> numberOfPlanets>>second;
        map<long long,long long>data;
        for(long long i=0; i<numberOfPlanets; i++)
        {
            long long x;
            cin >> x;
            data[x]++;
        }
        for(auto& x : data)
        {
            ans+=min(x.second,second);
        }
        cout<<ans<<endl;
    }
}