#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        if (x == 1)
            cout << 2 << endl;
        else
            cout << (x + 2) / 3 << endl;
    }
}