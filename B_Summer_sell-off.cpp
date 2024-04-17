#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long days, nora, ans = 0;
    cin >> days >> nora;
    vector<long long> profit(days);
    for (long long i = 0; i < days; ++i)
    {
        long long x,y;
        cin >> x>>y;
        ans+=min(x,y);
        profit[i]=min(y-x,x);
    }
    sort(profit.begin(), profit.end(),greater<long long>());
    for (long long i = 0; i <nora; i++)
    {
        if(profit[i] >0)ans+=profit[i];
    }
    cout << ans << endl;
}