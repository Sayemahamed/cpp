#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        set<long long> data1, data2;
        for (long long i = 0; i < 3; i++)
        {
            long long x, y;
            cin >> x >> y;
            data1.insert(x);
            data2.insert(y);
        }
        if (data1.size() >= 3 or data2.size() >= 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}