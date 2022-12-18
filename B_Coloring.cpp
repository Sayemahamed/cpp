#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long cells, colors, divisors, mx = 0;
        cin >> cells >> colors >> divisors;
        for (long long i = 0; i < colors; i++)
        {
            long long x;
            cin >> x;
            mx = max(mx, x);
        }
        if (mx > (cells + divisors - 1) / divisors)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}