#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long n, ans = 0, flags = true;
        cin >> n;
        while (n--)
        {
            long long x;
            cin >> x;
            ans ^= x;
            if (ans == 0 and n!=0)
                flags = false;
        }
        if (flags)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}