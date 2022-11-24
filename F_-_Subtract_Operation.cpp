#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long numbers, theNumber, flag = false;
        cin >> numbers >> theNumber;
        map<long long, bool> data;
        for (long long i = 0; i < numbers; i++)
        {
            long long x;
            cin >> x;
            if (data[x - theNumber] || data[x + theNumber])
                flag = true;
            data[x] = true;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}