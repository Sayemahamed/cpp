#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long candles,needed,ans=0;
    cin>>candles>>needed;
    ans+=candles;
    while (candles>=needed)
    {
        ans+=(candles/needed);
        candles=((candles/needed)+(candles%needed));
    }
    cout<<ans;
}