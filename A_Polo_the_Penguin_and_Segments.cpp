#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long siz,divider,ans=0;
    cin >> siz >> divider;
    while (siz--)
    {
        long long x,y;
        cin >> x >> y;
        ans+=y-x+1;
    }
    cout<<(divider-ans%divider)%divider;
}