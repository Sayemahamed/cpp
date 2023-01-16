#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin >> test;
    while (test--)
    {
        long long a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if ((a1 == b2 and b2 == (b1 + a2)) or (a2 == b1 and b1 == (b2 + a1))or(a1 == b1 and b1 == (b2 + a2)) or(a2 == b2 and b2 == (b1 + a1)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}