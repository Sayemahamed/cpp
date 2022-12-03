#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long numberOfHouses, moves, ans = 0, current = 1;
    cin >> numberOfHouses >> moves;
    for (long long i = 0; i < moves; i++)
    {
        long long x;
        cin >> x;
        if (current > x)
        {
            ans += numberOfHouses + x - current;
            current = x;
        }
        else
        {
            ans += x - current;
            current = x;
        }
    }
    cout << ans << endl;
}