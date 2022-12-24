#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long query, minOrang = INTMAX_MAX, minCandy = INTMAX_MAX, ans = 0;
        cin >> query;
        vector<long long> orang(query), candy(query);
        for (auto &it : orang)
            cin >> it, minOrang = min(minOrang, it);
        for (auto &it : candy)
            cin >> it, minCandy = min(minCandy, it);
        for (long long i = 0; i < query; i++)
        {
            long long tem = min(orang[i] - minOrang, candy[i] - minCandy);
            ans += tem;
            orang[i] -= tem;
            candy[i] -= tem;
            ans += orang[i] - minOrang;
            ans += candy[i] - minCandy;
        }
        cout << ans << endl;
    }
}