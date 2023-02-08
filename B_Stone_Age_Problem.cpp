#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long siz, que, sum = 0, temp;
    cin >> siz >> que;
    map<long long, long long> dat;
    for (long long i = 1; i <= siz; i++)
    {
        long long x;
        cin >> x;
        sum += x;
        dat[i] = x;
    }
    while (que--)
    {
        long long x;
        cin >> x;
        if (x == 1)
        {
            long long y, z;
            cin >> y >> z;
            if (dat.count(y))
            {
                sum -= dat[y];
                dat[y] = z;
                sum += z;
            }
            else
            {
                dat[y] = z;
                sum += z;
                sum -= temp;
            }
        }
        else
        {
            long long y;
            cin >> y;
            dat.clear();
            sum = y * siz;
            temp = y;
        }
        cout << sum << endl;
    }
}