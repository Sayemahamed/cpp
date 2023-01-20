#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long a, b;
        cin >> a >> b;
        cout << a * b / __gcd(a, b) << endl;
        // cout << a * b / __gcd(a,a * b/ __gcd(b, a)) - __gcd(b,a * b/ __gcd(b, a)) << endl;
    }
}