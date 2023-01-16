#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, cnt = 0, mn = INT64_MAX;
        cin >> n;
        set<long long> dat;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            mn = min(mn, x);
            dat.insert(x);
        }
        for (auto &it : dat)
        {
            if (dat.find(it % mn) == dat.end())
            {
                if (cnt >= n / 2)
                    break;
                cout << it << ' ' << mn << endl;
                cnt++;
            }
            if (dat.find(mn % it) == dat.end())
            {
                if (cnt >= n / 2)
                    break;
                cout << mn << ' ' << it << endl;
                cnt++;
            }
        }
    }
}