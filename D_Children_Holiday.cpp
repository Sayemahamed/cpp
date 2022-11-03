#include <bits/stdc++.h>
using namespace std;
const long long mx = 1e6;
long long balloon, helpers, timeNeeded[mx], threshold[mx], rest[mx], ans[mx];
bool isPossible(long long time)
{
    long long needed = balloon;
    for (long long i = 0; i < helpers; i++)
    {
        long long tm = time, count = 0;
        ans[i] = 0;
        while (tm >= timeNeeded[i])
        {
            if (count >= threshold[i])
            {
                count = 0;
                tm -= rest[i];
            }
            else
            {
                tm -= timeNeeded[i];
                needed--;
                count++;
                ans[i]++;
            }
        }
    }
    return needed <= 0;
}
int main()
{
    cin >> balloon >> helpers;
    for (long long i = 0; i < helpers; i++)
        cin >> timeNeeded[i] >> threshold[i] >> rest[i];
    long long low = 0, high = 1, mid;
    while (!isPossible(high))
        high <<= 1;
    while (high - low > 1)
    {
        mid = (high + low) >> 1;
        if (isPossible(mid))
            high = mid;
        else
            low = mid + 1;
    }
    if (isPossible(low))
        cout << low << endl;
    else if (isPossible(high))
        cout << high << endl;
    for (long long i = 0; i < helpers; i++)
        cout << ans[i] << ' ';
}